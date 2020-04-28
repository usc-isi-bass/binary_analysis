import numpy as np
import os
import torch
import torch.nn.functional as F
from sklearn.metrics import roc_auc_score
from torch import optim
from torch.autograd import Variable
from torch.utils.tensorboard import SummaryWriter
from .utils import construct_gcn_batch_edge_prediction, to_cuda, shuffle_data, load_pretrained_model
from .models.gcn import GCN
from .models.fully_connected import FC

DATA_PATH = os.getenv("DATA_PATH")


def get_gcn_and_fc_out(data, models):
    adj, feat, edge_out_nodes, edge_in_nodes, nonedge_out_nodes, nonedge_in_nodes, _, _ = data
    gcn, fc = models[0], models[1]
    adj = Variable(adj)
    feat = Variable(feat)
    gcn_out = gcn(feat, adj)

    gcn_out_nodes = torch.index_select(gcn_out, 0, edge_out_nodes)
    gcn_in_nodes = torch.index_select(gcn_out, 0, edge_in_nodes)
    gcn_repr_for_edges = torch.cat([gcn_out_nodes, gcn_in_nodes], dim=1)
    y_out_for_edges = fc(gcn_repr_for_edges)

    gcn_nonedge_out_nodes = torch.index_select(gcn_out, 0, nonedge_out_nodes)
    gcn_nonedge_in_nodes = torch.index_select(gcn_out, 0, nonedge_in_nodes)
    gcn_repr_for_nonedges = torch.cat([gcn_nonedge_out_nodes, gcn_nonedge_in_nodes], dim=1)
    y_out_for_nonedges = fc(gcn_repr_for_nonedges)
    return y_out_for_edges, y_out_for_nonedges, y_for_edges, y_for_nonedges


def get_fc_out(data, models):
    adj, feat, edge_out_nodes, edge_in_nodes, nonedge_out_nodes, nonedge_in_nodes, _, _ = data
    fc = models[0]

    feat = Variable(feat)
    edge_in_nodes_feat = torch.index_select(feat, 0, edge_in_nodes)
    edge_out_nodes_feat = torch.index_select(feat, 0, edge_out_nodes)
    edge_feat = torch.cat([edge_out_nodes_feat, edge_in_nodes_feat], dim=1)
    y_out_for_edges = fc(edge_feat)

    nonedge_in_nodes_feat = torch.index_select(feat, 0, nonedge_in_nodes)
    nonedge_out_nodes_feat = torch.index_select(feat, 0, nonedge_out_nodes)
    nonedge_feat = torch.cat([nonedge_out_nodes_feat, nonedge_in_nodes_feat], dim=1)
    y_out_for_nonedges = fc(nonedge_feat)
    return y_out_for_edges, y_out_for_nonedges, y_for_edges, y_for_nonedges


def run_epoch(epoch, args, train, models, batch_generator, optimizers, print_iter=0):
    epoch_loss = []
    epoch_acc = []
    dummy_accuracy = []
    roc_aucs = []

    if train:
        for model in models:
            model.train()
    else:
        for model in models:
            model.eval()

    if train:
        log_str = "Train"
    else:
        log_str = "Validation"
    for batch_idx, data in enumerate(batch_generator):
        if train:
            for model in models:
                model.zero_grad()

        data = to_cuda(data)
        _, _, _, _, _, _, y_for_edges, y_for_nonedges = data
        print("Args.encoder: ", args.encoder)
        if args.encoder == "no_encoder":
            y_out_for_edges, y_out_for_nonedges = get_fc_out(data=data, models=models)
        else:
            y_out_for_edges, y_out_for_nonedges = get_gcn_and_fc_out(data=data, models=models)

        loss = F.binary_cross_entropy_with_logits(y_out_for_edges, y_for_edges)
        loss += F.binary_cross_entropy_with_logits(y_out_for_nonedges, y_for_nonedges)

        if train:
            loss.backward()

        acc = (torch.argmax(y_for_edges, 1).eq(torch.argmax(y_out_for_edges, 1).long())).sum().data.item()
        acc += (torch.argmax(y_for_nonedges, 1).eq(torch.argmax(y_out_for_nonedges, 1)).long()).sum().data.item()
        acc = acc / (y_out_for_edges.shape[0] + y_out_for_nonedges.shape[0])

        if train:
            for optimizer in optimizers:
                optimizer.step()

        epoch_loss.append(loss.data.item())
        epoch_acc.append(acc)

        if train and batch_idx % args.batches_log == 0:
            if "loss" in args.report_metrics:
                args.writer.add_scalar(log_str + " loss", np.mean(epoch_loss[-10:]), print_iter)
            if "acc" in args.report_metrics:
                args.writer.add_scalar(log_str + " acc", np.mean(epoch_acc[-10:]), print_iter)
            if args.use_dummy_writer:
                args.dummy_writer.add_scalar(log_str + " acc", np.mean(dummy_accuracy[-10:]), print_iter)
            if args.use_roc_auc_writer:
                args.roc_auc_writer.add_scalar(log_str + " acc", np.mean(roc_aucs[-10:]), print_iter)
            print_iter += 1

    epoch_loss = np.mean(epoch_loss)
    epoch_acc = np.mean(epoch_acc)
    if epoch % args.epochs_log == 0 or (not train):
        args.writer.add_scalar(log_str + " epoch loss", epoch_loss, epoch)
        args.writer.add_scalar(log_str + " epoch acc", epoch_acc, epoch)
    return print_iter


def main(args):
    with open(DATA_PATH + '/updated_graphs/fold_0/{}_gcn_on_oj_train.pkl'.format(args.data), 'rb') as f:
        train = pkl.load(f)
        train_adj, train_feat, train_labels = train
    if args.use_test_set:
        with open(DATA_PATH + '/updated_graphs/fold_0/{}_gcn_on_oj_test.pkl'.format(args.data), 'rb') as f:
            test = pkl.load(f)
        val_adj, val_feat, val_labels = test
    else:
        with open(DATA_PATH + '/updated_graphs/fold_0/{}_gcn_on_oj_val.pkl'.format(args.data), 'rb') as f:
            val = pkl.load(f)
        val_adj, val_feat, val_labels = val

    if args.add_self_loops:
        train_adj = [sp.csr_matrix(a.todense() + np.eye(a.shape[0])) for a in train_adj]
        val_adj = [sp.csr_matrix(a.todense() + np.eye(a.shape[0])) for a in val_adj]

    if not args.use_entire_training_set:
        train_adj = train_adj[:args.num_training_examples]
        train_feat = train_feat[:args.num_training_examples]
        train_labels = train_labels[:args.num_training_examples]

    if not args.use_entire_testing_set:
        val_adj = val_adj[:args.num_testing_examples]
        val_feat = val_feat[:args.num_testing_examples]
        val_labels = val_labels[:args.num_testing_examples]

    if args.undirected_graphs:
        undirected_train_adj = []
        for t in train_adj:
            undirected_train_adj.append(t + t.T)
        train_adj = np.asarray(undirected_train_adj)
        undirected_val_adj = []
        for v in val_adj:
            undirected_val_adj.append(v + v.T)
        val_adj = np.asarray(undirected_val_adj)

    torch.cuda.set_device(args.cuda)
    args.writer = SummaryWriter(args.logs_dir + args.writer_name + args.writer_comment)
    if args.use_dummy_writer:
        args.dummy_writer = SummaryWriter(args.logs_dir + args.writer_name + args.writer_comment + "_dummy")
    if args.use_roc_auc_writer:
        args.roc_auc_writer = SummaryWriter(args.logs_dir + args.writer_name + args.writer_comment + "_roc_auc")

    models = []
    optimizers = []
    starting_epoch = 1
    if not (args.encoder == "no_encoder"):
        gcn = GCN(nfeat=train_feat[0].shape[1], layer_dims=args.encoder_layer_dims, nout=args.encoder_nout,
                  dropout=False, softmax=args.encoder_softmax, name="GCN").cuda()
        if args.allow_load_pretrained_model:
            last_epoch_gcn = load_pretrained_model(args, gcn, pattern="{}_{}_{}_gcn")
        models.append(gcn)
        optimizer_gcn = optim.Adam(list(gcn.parameters()), lr=args.lr)
        optimizers.append(optimizer_gcn)
    else:
        args.encoder_nout = train_feat[0].shape[1]
    args.predictor_nfeat = 2 * args.encoder_nout
    fc = FC(nfeat=args.predictor_nfeat, layer_dims=args.predictor_layer_dims,
            nout=args.predictor_nout, name="FC").cuda()
    if args.allow_load_pretrained_model:
        last_epoch_fc = load_pretrained_model(args, fc, pattern="{}_{}_{}_fc")
        assert last_epoch_gcn == last_epoch_fc
        starting_epoch = last_epoch_fc + 1
    optimizer_fc = optim.Adam(list(fc.parameters()), lr=args.lr)

    models.append(fc)
    optimizers.append(optimizer_fc)

    print_iter = 0

    train_edge_out_nodes = [A.nonzero()[0] for A in train_adj]
    train_edge_in_nodes = [A.nonzero()[1] for A in train_adj]
    val_edge_out_nodes = [A.nonzero()[0] for A in val_adj]
    val_edge_in_nodes = [A.nonzero()[1] for A in val_adj]

    for epoch in range(starting_epoch, args.max_epochs + 1):
        if args.sample_subgraphs:
            batch_generator = construct_gcn_batch_mask_subgraph_edges_all(adj=train_adj, features=train_feat,
                                                                          args=args,
                                                                          mask_size=args.mask_size)
        else:
            batch_generator = construct_gcn_batch_edge_prediction(adj=train_adj,
                                                                  features=train_feat,
                                                                  args=args,
                                                                  edge_out_nodes=train_edge_out_nodes,
                                                                  edge_in_nodes=train_edge_in_nodes,
                                                                  batch_size=args.batch_size)
        print_iter = run_epoch(epoch=epoch,
                               args=args,
                               train=True,
                               models=models,
                               optimizers=optimizers,
                               batch_generator=batch_generator,
                               print_iter=print_iter)
        if args.shuffle_after_epoch:
            train_adj, train_feat, train_labels = shuffle_data([train_adj, train_feat, train_labels])

        if epoch % args.epochs_save == 0:
            if not (args.encoder == "no_encoder"):
                torch.save(gcn.state_dict(), args.model_ckp_dir + "{}_{}_{}_gcn".format(args.writer_name,
                                                                                        args.writer_comment, epoch))
            torch.save(fc.state_dict(), args.model_ckp_dir + "{}_{}_{}_fc".format(args.writer_name,
                                                                                  args.writer_comment, epoch))
        if epoch >= args.epochs_test_start and epoch % args.epochs_test == 0:
            if args.sample_subgraphs:
                batch_generator = construct_gcn_batch_mask_subgraph_edges_all(adj=val_adj, features=val_feat,
                                                                              args=args,
                                                                              mask_size=args.mask_size)
            else:
                batch_generator = construct_gcn_batch_edge_prediction(adj=val_adj,
                                                                      features=val_feat,
                                                                      args=args,
                                                                      edge_out_nodes=val_edge_out_nodes,
                                                                      edge_in_nodes=val_edge_in_nodes,
                                                                      batch_size=args.batch_size)
            run_epoch(epoch=epoch,
                      args=args,
                      train=False,
                      models=models,
                      optimizers=optimizers,
                      batch_generator=batch_generator)
            if args.shuffle_after_epoch:
                val_adj, val_feat, val_labels = shuffle_data([val_adj, val_feat, val_labels])


if __name__ == '__main__':
    main()
