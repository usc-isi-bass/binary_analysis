import pickle as pkl

import numpy as np
import torch
import torch.nn.functional as F
from torch import optim
from torch.autograd import Variable
from torch.utils.tensorboard import SummaryWriter
from .utils import construct_gcn_batch
from .models.gcn import GCN
from .models.fully_connected import FC


def run_epoch(epoch, args, all_adj_matrices, train, models, batch_generator, optimizers, print_iter=0):
    epoch_loss = []
    epoch_acc = []

    if train:
        for model in models:
            model.train()
    else:
        for model in models:
            model.eval()
    gcn, fc = models[0], models[1]

    non_zero_xs = [A.nonzero()[0] for A in all_adj_matrices]
    non_zero_ys = [A.nonzero()[1] for A in all_adj_matrices]

    if train:
        log_str = "Train"
    else:
        log_str = "Validation"
    for batch_idx, data in enumerate(batch_generator):
        if train:
            for model in models:
                model.zero_grad()

        num_edges = 1000

        adj, feat = data
        if not args.use_large_graphs:
            if adj.shape[0] > 15000:
                continue

        edge_idxs = np.random.randint(0, len(non_zero_xs[batch_idx]), num_edges)
        n1_idxs = torch.LongTensor(non_zero_xs[batch_idx][edge_idxs]).cuda()
        n2_idxs = torch.LongTensor(non_zero_ys[batch_idx][edge_idxs]).cuda()
        masked_adj = adj.todense()
        for i, j in zip(n1_idxs, n2_idxs):
            masked_adj[i, j] = 0

        adj_v = Variable(torch.FloatTensor(masked_adj).cuda(), requires_grad=True)
        feat_v = Variable(torch.FloatTensor(feat.todense()), requires_grad=True).cuda()
        gcn_out = gcn(feat_v, adj_v)

        gcn_n1 = torch.index_select(gcn_out, 0, n1_idxs)
        gcn_n2 = torch.index_select(gcn_out, 0, n2_idxs)
        gcn_repr_for_edges = torch.cat([gcn_n1, gcn_n2], dim=1)
        y_out_for_edges = fc(gcn_repr_for_edges)

        a = np.zeros((num_edges, 2))
        for ai in a:
            ai[1] = 1
        y_for_edges = torch.FloatTensor(a).cuda()
        loss = F.binary_cross_entropy_with_logits(y_out_for_edges, y_for_edges, reduce=None)
        nonedge_idxs = np.random.randint(0, adj.shape[0], 2 * num_edges)
        n3_idxs = torch.LongTensor(nonedge_idxs[:num_edges]).cuda()
        n4_idxs = torch.LongTensor(nonedge_idxs[num_edges:]).cuda()
        gcn_n3 = torch.index_select(gcn_out, 0, n3_idxs)
        gcn_n4 = torch.index_select(gcn_out, 0, n4_idxs)
        gcn_repr_for_nonedges = torch.cat([gcn_n3, gcn_n4], dim=1)
        y_out_for_nonedges = fc(gcn_repr_for_nonedges)

        is_edge = np.asarray(all_adj_matrices[batch_idx].todense()[nonedge_idxs[:num_edges],
                                                                   nonedge_idxs[num_edges:]]).reshape(-1)
        b = np.zeros((num_edges, 2))
        for bi, ie in zip(b, is_edge):
            bi[ie] = 1
        y_for_nonedges = torch.FloatTensor(b).cuda()
        loss += F.binary_cross_entropy_with_logits(y_out_for_nonedges, y_for_nonedges, reduce=None)
        if train:
            loss.backward()

        acc = (torch.argmax(y_for_edges, 1).eq(torch.argmax(y_out_for_edges, 1).long())).sum().data.item()
        acc += (torch.argmax(y_for_nonedges, 1).eq(torch.argmax(y_out_for_nonedges, 1)).long()).sum().data.item()
        acc = acc / (2 * num_edges)

        if train:
            for optimizer in optimizers:
                optimizer.step()

        epoch_loss.append(loss.data.item())
        epoch_acc.append(acc)

        if train and batch_idx % args.batches_log == 0:
            if "loss" in args.report_metrics:
                args.writer.add_scalar(log_str + " loss", loss.data.item(), print_iter)
            if "acc" in args.report_metrics:
                args.writer.add_scalar(log_str + " acc", acc, print_iter)
            print_iter += 1

    epoch_loss = np.mean(epoch_loss)
    epoch_acc = np.mean(epoch_acc)
    if epoch % args.epochs_log == 0 or (not train):
        args.writer.add_scalar(log_str + " epoch loss", epoch_loss, epoch)
        args.writer.add_scalar(log_str + " epoch acc", epoch_acc, epoch)
    return print_iter


def main(args):
    with open('/nas/home/shushan/updated_graphs/fold_0/{}_gcn_on_oj_train.pkl'.format(args.data), 'rb') as f:
        train = pkl.load(f)
    if args.use_test_set:
        with open('/nas/home/shushan/updated_graphs/fold_0/{}_gcn_on_oj_test.pkl'.format(args.data), 'rb') as f:
            test = pkl.load(f)
        val_adj, val_feat, val_labels = test
    else:
        with open('/nas/home/shushan/updated_graphs/fold_0/{}_gcn_on_oj_val.pkl'.format(args.data), 'rb') as f:
            val = pkl.load(f)
        val_adj, val_feat, val_labels = val

    train_adj, train_feat, train_labels = train

    if not args.use_entire_training_set:
        train_adj = train_adj[:args.num_training_examples]
        train_feat = train_feat[:args.num_training_examples]
        train_labels = train_labels[:args.num_training_examples]

    if not args.use_entire_testing_set:
        val_adj = val_adj[:args.num_testing_examples]
        val_feat = val_feat[:args.num_testing_examples]
        val_labels = val_labels[:args.num_testing_examples]

    torch.cuda.set_device(args.cuda)

    writer = SummaryWriter(args.logs_dir + args.writer_name + args.writer_comment)
    args.writer = writer

    gcn = GCN(nfeat=train_feat[0].shape[1], layer_dims=args.encoder_layer_dims,
              nout=args.encoder_nout, dropout=False, softmax=args.encoder_softmax, name="GCN").cuda()
    optimizer_gcn = optim.Adam(list(gcn.parameters()), lr=args.lr)
    args.predictor_nfeat = 2 * args.encoder_nout
    fc = FC(nfeat=args.predictor_nfeat, layer_dims=args.predictor_layer_dims,
            nout=args.predictor_nout, name="FC").cuda()
    optimizer_fc = optim.Adam(list(fc.parameters()), lr=args.lr)

    print_iter = 0
    for epoch in range(1, args.max_epochs + 1):
        print_iter = run_epoch(epoch=epoch,
                               args=args,
                               all_adj_matrices=train_adj,
                               train=True,
                               models=[gcn, fc],
                               optimizers=[optimizer_gcn, optimizer_fc],
                               batch_generator=construct_gcn_batch(train_adj, train_feat,
                                                                   batch_size=args.batch_size),
                               print_iter=print_iter)

        if epoch % args.epochs_save == 0:
            torch.save(gcn.state_dict(), args.model_ckp_dir + "{}_{}_{}_gcn".format(args.writer_name,
                                                                                    args.writer_comment, epoch))
            torch.save(fc.state_dict(), args.model_ckp_dir + "{}_{}_{}_fc".format(args.writer_name,
                                                                                  args.writer_comment, epoch))
        if epoch >= args.epochs_test_start and epoch % args.epochs_test == 0:
            run_epoch(epoch=epoch,
                      args=args,
                      all_adj_matrices=val_adj,
                      train=False,
                      models=[gcn, fc],
                      optimizers=[optimizer_gcn, optimizer_fc],
                      batch_generator=construct_gcn_batch(val_adj, val_feat,
                                                          batch_size=args.batch_size))


if __name__ == '__main__':
    main()
