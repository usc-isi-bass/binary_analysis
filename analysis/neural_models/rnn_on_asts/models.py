import torch
import torch.nn.functional as F

from torch.autograd import Variable

from node import Node
from tree import Tree
from vocab import Vocab

def Var(v):
    return Variable(v.cuda())

class Config(object):
    """Holds model hyperparams and data information.
       Model objects are passed a Config() object at instantiation.
    """
    embed_size = 35
    label_size = 104
    max_epochs = 20
    amsgrad = False
    lr = 0.001
    l2 = 0.02
    
    
class RecursiveNN(torch.nn.Module):
    def __init__(self, vocab, config):
        super(RecursiveNN, self).__init__()
        self.config = config
        self.vocab = vocab
        self.embedding = torch.nn.Embedding(int(self.vocab.vocab_size), self.config.embed_size)
        self.W = torch.nn.Linear(2*self.config.embed_size, self.config.embed_size, bias=True)
        self.projection = torch.nn.Linear(self.config.embed_size, self.config.label_size, bias=True)
        self.activation = F.relu

    def _traverse(self, node):
        if node.isLeaf: 
            currentNode = self.activation(self.embedding(
                Var(torch.LongTensor([self.vocab.encode(node.word)]))))
        else: 
            l, _ = self._traverse(node.left)
            r, _ = self._traverse(node.right)
            currentNode = self.activation(
                self.W(torch.cat((l, r),1)))
        return currentNode, self.projection(currentNode)

    def forward(self, x):
        _, logits = self._traverse(x.root)
        prediction = logits.max(dim=1)[1]
        loss = F.cross_entropy(input=logits, target=Var(torch.tensor([x.label-1])))
        return prediction, loss
    
class MRecursiveNN(torch.nn.Module):
    def __init__(self, vocab, config):
        super(MRecursiveNN, self).__init__()
        self.config = config
        self.vocab = vocab
        self.embedding = torch.nn.Embedding(int(self.vocab.vocab_size), self.config.embed_size**2)
        self.W = torch.nn.Linear(2*self.config.embed_size, self.config.embed_size, bias=True)
        self.projection = torch.nn.Linear(self.config.embed_size**2, self.config.label_size, bias=True)
        self.activation = F.relu

    def _traverse(self, node):
        if node.isLeaf: 
            currentNode = self.activation(self.embedding(
                Var(torch.tensor([self.vocab.encode(node.word)]))))
            currentNode = currentNode.view(self.config.embed_size, self.config.embed_size)
        else: 
            l = self._traverse(node.left).view(self.config.embed_size, self.config.embed_size)
            r = self._traverse(node.right).view(self.config.embed_size, self.config.embed_size)
            currentNode = self.activation(
                self.W(torch.cat((l, r),1)))
        return currentNode

    def forward(self, x):
        emb = self._traverse(x.root)
        logits = self.projection(emb.view(1, -1))
        loss = F.cross_entropy(input=logits, target=Var(torch.tensor([x.label - 1])))

        prediction = logits.max(dim=1)[1]
        return prediction, loss
    
class AdditiveRecursiveNN(torch.nn.Module):
    def __init__(self, vocab, config):
        super(AdditiveRecursiveNN, self).__init__()
        self.config = config
        self.vocab = vocab
        self.embedding = torch.nn.Embedding(int(self.vocab.vocab_size), self.config.embed_size**2)
        self.biases = torch.nn.Embedding(int(self.vocab.vocab_size), self.config.embed_size)
        self.projection = torch.nn.Linear(self.config.embed_size**2, self.config.label_size, bias=True)
        self.activation = F.relu

    def _traverse(self, node):
        vocab_idx = Var(torch.tensor([self.vocab.encode(node.word)]))
        currentNode = self.embedding(vocab_idx)
        currentNode = currentNode.view(self.config.embed_size, self.config.embed_size)
        
        if not node.isLeaf: 
            currentBias = self.biases(vocab_idx)
            
            l = self._traverse(node.left).view(self.config.embed_size, self.config.embed_size)
            r = self._traverse(node.right).view(self.config.embed_size, self.config.embed_size)
            input = l + r
            
            currentNode = F.linear(input, current_node, current_bias)
        return self.activation(currentNode)

    def forward(self, x):
        emb = self._traverse(x.root)
        logits = self.projection(emb.view(1, -1))
        loss = F.cross_entropy(input=logits, target=Var(torch.tensor([x.label - 1])))

        prediction = logits.max(dim=1)[1]
        return prediction, loss

class SWRecursiveNN(torch.nn.Module):
    def __init__(self, vocab, config):
        super(SWRecursiveNN, self).__init__()
        self.config = config
        self.vocab = vocab
        self.embedding = torch.nn.Embedding(int(self.vocab.vocab_size), 
                                            (self.config.embed_size)**2)
        
        self.biases = torch.nn.Parameter(torch.zeros((self.config.embed_size,
                                                      self.config.embed_size),
                                                     dtype=torch.float, requires_grad=True))
        self.register_parameter('bias', self.biases)

        self.projection = torch.nn.Linear(self.config.embed_size**2, 
                                          self.config.label_size, bias=True)
        self.activation = F.relu
        
        self.loss_func = torch.nn.CrossEntropyLoss()
        
        torch.nn.init.xavier_uniform(self.embedding.weight)
        torch.nn.init.xavier_uniform(self.projection.weight)

    def _traverse(self, node):
        currentNode = self.embedding(
                Var(torch.tensor([self.vocab.encode(node.word)])))
        if not node.isLeaf: 
            l = self._traverse(node.left)
            r = self._traverse(node.right)
            currentNode = currentNode.view(self.config.embed_size, self.config.embed_size)
            currentNode = torch.mm(l, torch.mm(currentNode, r)) + self.biases
            currentNode = currentNode.view(1, -1)
        return self.activation(currentNode)

    def forward(self, x):
        emb = self._traverse(x.root)
        logits = self.projection(emb)
        label = Var(torch.tensor([x.label - 1]))
        loss = self.loss_func(logits, label)

        # For debugging only
        if loss.data.item() > 1e4:
            import IPython; IPython.embed()

        prediction = logits.max(dim=1)[1]
        return prediction, loss