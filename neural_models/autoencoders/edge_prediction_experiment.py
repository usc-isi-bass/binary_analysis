import pickle as pkl

import numpy as np
import torch
import torch.nn.functional as F
from torch import optim
from torch.autograd import Variable
from torch.utils.tensorboard import SummaryWriter
from .utils import construct_gcn_batch
from neural_models.autoencoders.models.gcn import GCN
from neural_models.autoencoders.models.fully_connected import FC


def run_epoch(epoch, args, adj, train, models, batch_generator, optimizers):
    epoch_loss = 0
    epoch_acc = 0

    if train:
        for model in models:
            model.train()
    else:
        for model in models:
            model.eval()
    gcn, fc = models[0], models[1]

    non_zero_xs = [a.nonzero()[0] for a in adj]
    non_zero_ys = [a.nonzero()[1] for a in adj]

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

        is_an_edge = np.asarray(adj[batch_idx].todense()[nonedge_idxs[:num_edges],
                                                               nonedge_idxs[num_edges:]]).reshape(-1)
        b = np.zeros((num_edges, 2))
        for bi, ie in zip(b, is_an_edge):
            bi[ie] = 1
        y_for_nonedges = torch.FloatTensor(b).cuda()
        loss += F.binary_cross_entropy_with_logits(y_out_for_nonedges, y_for_nonedges, reduce=None)
        loss.backward()

        acc = (torch.argmax(y_for_edges, 1).eq(torch.argmax(y_out_for_edges, 1).long())).sum().data.item()
        acc += (torch.argmax(y_for_nonedges, 1).eq(torch.argmax(y_out_for_nonedges, 1)).long()).sum().data.item()
        acc = acc / (2 * num_edges)

        for optimizer in optimizers:
            optimizer.step()

        epoch_loss += loss.data.item()
        epoch_acc += acc

        if batch_idx % args.print_every == 0:
            if "loss" in args.report_metrics:
                args.writer.add_scalar(log_str + " loss", loss.data.item(), args.print_iter)
            if "acc" in args.report_metrics:
                args.writer.add_scalar(log_str + " acc", acc, args.print_iter)
            args.print_iter += 1

    epoch_loss = epoch_loss / batch_idx
    epoch_acc = epoch_acc / batch_idx

    args.writer(log_str + " epoch loss", epoch_loss, epoch)
    args.writer(log_str + " epoch acc", epoch_acc, epoch)


def main(args):
    with open('/nas/home/shushan/updated_graphs/fold_0/{args.data}_gcn_on_oj_test.pkl', 'rb') as f:
        test = pkl.load(f)
    with open('/nas/home/shushan/updated_graphs/fold_0/{args.data}_gcn_on_oj_train.pkl', 'rb') as f:
        train = pkl.load(f)
    with open('/nas/home/shushan/updated_graphs/fold_0/{args.data}_gcn_on_oj_val.pkl', 'rb') as f:
        val = pkl.load(f)

    train_adj, train_feat, train_labels = train
    test_adj, test_feat, test_labels = test
    val_adj, val_feat, val_labels = val

    torch.cuda.set_device(args.cuda)

    writer = SummaryWriter(args.writer_name + args.writer_comment)
    args.writer = writer

    gcn = GCN(train_feat[0].shape[1], args.encoder_layer_dims, args.encoder_nout)).cuda()
    optimizer_gcn = optim.Adam(list(gcn.parameters()), lr=args.lr)
    fc = FC(nfeat=args.predictor_nfeat, args.predictor_layer_dims, args.predictor_nout = 2).cuda()
    optimizer_fc = optim.Adam(list(fc.parameters()), lr=args.lr)

    for epoch in range(max_epochs):
        run_epoch(epoch=epoch,
                  args=args,
                  adj=train_adj,
                  train=True,
                  models=[gcn, fc],
                  optimizers=[optimizer_gcn, optimizer_fc],
                  batch_generator=construct_gcn_batch(train_adj, train_feat, batch_size=args.batch_size))
        run_epoch(epoch=epoch,
                  args=args,
                  adj=val_adj,
                  train=False,
                  models=[gcn, fc],
                  optimizers=[optimizer_gcn, optimizer_fc],
                  batch_generator=construct_gcn_batch(val_adj, val_feat, batch_size=args.batch_size))


if __name__ == '__main__':
    main()
