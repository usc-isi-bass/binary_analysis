import math
import torch
import torch.nn as nn
import torch.nn.functional as F

from torch.nn.parameter import Parameter
from torch.nn.modules.module import Module

from layers import GraphConvolution, SparseGraphConvolution

class GCN(nn.Module):
    def __init__(self, nfeat, layer_dims, nout, dropout, softmax, name):
        super(GCN, self).__init__()
        self.create(nfeat, layer_dims, nout)
        self.softmax = softmax
        self.name = name

    def create(self, nfeat, layer_dims, nout):
        self.layers = [GraphConvolution(nfeat, layer_dims[0])]
        for i in range(1, len(layer_dims)):
            self.layers.append(GraphConvolution(layer_dims[i-1], layer_dims[i]))
        self.layers.append(GraphConvolution(layer_dims[-1], nclass))
        
    def forward(self, x, adj):
        for i in range(len(self.layers) - 1):
            x = F.relu(self.layers[i](x, adj))
        x = self.layers[-1](x, adj)
        if self.softmax:
            x = F.log_softmax(x, dim=1)
        return x