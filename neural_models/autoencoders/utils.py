import networkx as nx
import numpy as np
import scipy.sparse as sp
import torch

def csr_to_torch_sparse(a):
    coo_a = a.tocoo()
    data = torch.FloatTensor(coo_a.data)
    idx = torch.LongTensor([coo_a.row, coo_a.col])
    return idx, data, coo_a.shape

def construct_gcn_batch(adj, features, batch_size=32):
    G = adj.shape[-1]
    for i in range(G//batch_size + int(G%batch_size != 0)):
        batch_adj = sp.csr_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        batch_features = sp.csr_matrix(sp.vstack(features[batch_size * i: batch_size * (i + 1)]))
        yield batch_adj, batch_features
    return

def construct_gcn_batch_masked(adj, features, masked_features, masks, batch_size=32):
    G = adj.shape[-1]
    for i in range(G//batch_size + int(G%batch_size != 0)):
        batch_adj = sp.csr_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        batch_features = sp.vstack(features[batch_size * i: batch_size * (i + 1)])
        batch_masked = sp.csr_matrix(sp.vstack(masked_features[batch_size * i: batch_size * (i + 1)]))
        batch_masks = np.hstack(masks[batch_size * i: batch_size * (i + 1)])
        yield batch_adj, batch_features, batch_masked, batch_masks
    return

def construct_gcn_batch_with_labels(adj, features, labels, batch_size=32):
    G = adj.shape[-1]
    for i in range(G//batch_size + int(G%batch_size != 0)):
        batch_adj = sp.csr_matrix(sp.block_diag(list(adj[batch_size * i: batch_size * (i + 1)])))
        batch_features = sp.csr_matrix(sp.vstack(features[batch_size * i: batch_size * (i + 1)]))
        batch_pooling = sp.csr_matrix(sp.block_diag(
            [np.ones(a.shape[0])/a.shape[0] for a in adj[batch_size * i: batch_size * (i + 1)]]))
        batch_labels = np.argmax(labels[batch_size * i: batch_size * (i + 1)], axis=1)
        yield batch_adj, batch_features, batch_labels, batch_pooling
    return