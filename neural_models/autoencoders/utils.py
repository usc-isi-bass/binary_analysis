import glob
import numpy as np
import pickle as pkl
import scipy.sparse as sp
import torch

from torch.autograd import Variable

from .test import test_masking, test_is_edge


def scipy_to_torch_sparse(a):
    coo_a = a.tocoo()
    data = torch.FloatTensor(coo_a.data)
    idx = torch.LongTensor([coo_a.row, coo_a.col])
    return idx, data, coo_a.shape


def construct_gcn_batch(adj, features, batch_size=32):
    G = adj.shape[-1]
    for i in range(G // batch_size + int(G % batch_size != 0)):
        batch_adj = sp.csr_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        batch_features = sp.csr_matrix(sp.vstack(features[batch_size * i: batch_size * (i + 1)]))
        yield batch_adj, batch_features
    return


def construct_gcn_batch_edge_prediction(adj, features, edge_out_nodes, edge_in_nodes, args, batch_size=32):
    G = adj.shape[-1]
    if args.run_tests:
        assert len(edge_out_nodes) == len(edge_in_nodes)
    for i in range(G // batch_size + int(G % batch_size != 0)):
        # construct adj matrix
        batch_adj = sp.dok_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        # sample edges
        current_batch_size = len(adj[batch_size * i: batch_size * (i + 1)])
        batch_out_nodes = edge_out_nodes[batch_size * i: batch_size * (i + 1)]
        batch_in_nodes = edge_in_nodes[batch_size * i: batch_size * (i + 1)]
        offset = 0
        for k in range(current_batch_size):
            # sample args.num_edges from each graph
            edge_idxs = np.random.randint(0, len(batch_out_nodes[k]), args.num_edges)
            batch_out_nodes[k] = np.add(batch_out_nodes[k][edge_idxs], offset)
            batch_in_nodes[k] = np.add(batch_in_nodes[k][edge_idxs], offset)
            offset += adj[batch_size * i: batch_size * (i + 1)][k].shape[0]
        batch_in_nodes = np.hstack(batch_in_nodes)
        batch_out_nodes = np.hstack(batch_out_nodes)
        labels_for_edges = np.ones(current_batch_size * args.num_edges, dtype=int)

        if args.run_tests:
            test_is_edge(batch_adj, batch_out_nodes, batch_in_nodes, labels_for_edges)
        # mask selected edges from adj matrix
        for j, k in zip(batch_out_nodes, batch_in_nodes):
            batch_adj[j, k] = args.edge_masking_value
        if args.run_tests:
            test_masking(batch_adj, batch_out_nodes, batch_in_nodes)

        # construct features
        batch_features = sp.csr_matrix(sp.vstack(features[batch_size * i: batch_size * (i + 1)]))

        # sample non-edges
        batch_nonedge_out_node = [np.random.randint(0, a.shape[0], args.num_edges)
                                  for a in adj[batch_size * i: batch_size * (i + 1)]]
        batch_nonedge_in_node = [np.random.randint(0, a.shape[0], args.num_edges)
                                 for a in adj[batch_size * i: batch_size * (i + 1)]]
        offset = 0
        for k in range(len(adj[batch_size * i: batch_size * (i + 1)])):
            batch_nonedge_out_node[k] = np.add(batch_nonedge_out_node[k], offset)
            batch_nonedge_in_node[k] = np.add(batch_nonedge_in_node[k], offset)

            offset += adj[batch_size * i: batch_size * (i + 1)][k].shape[0]

        batch_nonedge_in_node = np.hstack(batch_nonedge_in_node)
        batch_nonedge_out_node = np.hstack(batch_nonedge_out_node)
        labels_for_nonedges = np.asarray(batch_adj[batch_nonedge_out_node, batch_nonedge_in_node].todense()).ravel()

        if args.run_tests:
            test_is_edge(batch_adj, batch_nonedge_out_node, batch_nonedge_in_node, labels_for_nonedges)

        # wrap in tensors
        batch_adj = torch.sparse.FloatTensor(*scipy_to_torch_sparse(batch_adj))
        batch_features = torch.FloatTensor(batch_features.todense())
        batch_out_nodes = torch.LongTensor(batch_out_nodes)
        batch_in_nodes = torch.LongTensor(batch_in_nodes)
        batch_nonedge_in_node = torch.LongTensor(batch_nonedge_in_node)
        batch_nonedge_out_node = torch.LongTensor(batch_nonedge_out_node)
        labels_for_edges = torch.FloatTensor(to_one_hot(labels_for_edges, 2))
        labels_for_nonedges = torch.FloatTensor(to_one_hot(labels_for_nonedges, 2))

        yield (batch_adj, batch_features, batch_out_nodes, batch_in_nodes,
               batch_nonedge_out_node, batch_nonedge_in_node, labels_for_edges, labels_for_nonedges)
    return


def construct_gcn_batch_masked(adj, features, masked_features, masks, batch_size=32):
    G = adj.shape[-1]
    for i in range(G // batch_size + int(G % batch_size != 0)):
        batch_adj = sp.csr_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        batch_features = sp.vstack(features[batch_size * i: batch_size * (i + 1)])
        batch_masked = sp.csr_matrix(sp.vstack(masked_features[batch_size * i: batch_size * (i + 1)]))
        batch_masks = np.hstack(masks[batch_size * i: batch_size * (i + 1)])
        yield batch_adj, batch_features, batch_masked, batch_masks
    return


def construct_gcn_batch_with_labels(adj, features, labels, batch_size=32):
    G = adj.shape[-1]
    for i in range(G // batch_size + int(G % batch_size != 0)):
        batch_adj = sp.csr_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        batch_features = sp.csr_matrix(sp.vstack(features[batch_size * i: batch_size * (i + 1)]))
        batch_pooling = sp.csr_matrix(sp.block_diag(
            [np.ones(a.shape[0]) / a.shape[0] for a in adj[batch_size * i: batch_size * (i + 1)]]))
        batch_labels = np.argmax(labels[batch_size * i: batch_size * (i + 1)], axis=1)
        yield batch_adj, batch_features, batch_labels, batch_pooling
    return


def to_one_hot(y, n_dims=None):
    if isinstance(y, Variable) or isinstance(y, torch.Tensor):
        return tensor_to_one_hot(y, n_dims)
    if isinstance(y, (np.ndarray, np.generic)):
        return numpy_to_one_hot(y, n_dims)


def tensor_to_one_hot(y, n_dims=None):
    """ Take integer y (tensor or variable) with n dims and convert it to 1-hot representation with n+1 dims. """
    y_tensor = y.data if isinstance(y, Variable) else y
    y_tensor = y_tensor.type(torch.LongTensor).view(-1, 1)
    n_dims = n_dims if n_dims is not None else int(torch.max(y_tensor)) + 1
    y_one_hot = torch.zeros(y_tensor.size()[0], n_dims).scatter_(1, y_tensor, 1)
    y_one_hot = y_one_hot.view(*y.shape, -1)
    return Variable(y_one_hot) if isinstance(y, Variable) else y_one_hot


def numpy_to_one_hot(y, n_dims=None):
    if not n_dims:
        n_dims = np.max(y) + 1
    return np.eye(n_dims)[y]


def shuffle_data(data):
    shuffled_iter = np.arange(len(data[0]))
    np.random.shuffle(shuffled_iter)
    shuffled_data = []
    for d in data:
        shuffled_data.append(d[shuffled_iter])
    return shuffled_data


def to_cuda(args):
    cuda_args = []
    for arg in args:
        if isinstance(arg, Variable) or isinstance(arg, torch.Tensor):
            cuda_args.append(arg.cuda())
        else:
            cuda_args.append(arg)
    return cuda_args


def load_pretrained_model(args, model, pattern):
    model_ckp_files = glob.glob(args.model_ckp_dir + pattern.format(args.writer_name,
                                                                    args.writer_comment, "*"))

    def get_epoch(ckp_file):
        return int(ckp_file.split("_")[-2])

    epochs = [get_epoch(mcf) for mcf in model_ckp_files]
    last_epoch = np.argmax(epochs)
    model.load_state_dict(torch.load(args.model_ckp_dir + pattern.format(args.writer_name,
                                                                         args.writer_comment, epochs[last_epoch])))
    return epochs[last_epoch]
