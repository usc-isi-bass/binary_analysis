import math
import torch
import torch.nn as nn
import torch.nn.functional as F

from torch.nn.parameter import Parameter
from torch.nn.modules.module import Module

from model_utils import create_layers

class FC(nn.Module):
    def __init__(self, nfeat, layer_dims, nout, name):
        super(FC, self).__init__()
        self.layers = create_layers(nn.Linear, nfeat, layer_dims, nout)
        
    def forward(self, x):
        for i in range(len(self.layers) - 1):
            x = F.relu(self.layers[i](x))
        x = self.layers[-1](x)
        return self.fc2(x)