
### program configuration
class Args():
    def __init__(self):
        ### if clean tensorboard
        self.clean_tensorboard = False
        ### Which CUDA GPU device is used for training
        self.cuda = 1

        ### What model to use for graph representation
        self.encoder = 'gcn'
        
        ### What model to use for prediction
        self.predictor = 'fc'
        
        ### Which dataset is used in the experiment
        # old - the tokens are truncated by frequency
        # two_digit - the tokens of constants are truncated to least significant (last) 2 digits
        # const - the tokens of constants are all replaced with a placeholder token CONST
        self.data = 'old'
        #  self.data = 'two_digit'
        # self.data = 'const'
                
        ### Whether to use or skip graphs that are too large
        self.use_large_graphs = False
        self.max_graph_size = 15000
        
        ### Experiment context
        # Whether to use all predictions for all nodes to calculate the loss
        self.calculate_loss = 'on_all'

        ### network config
        ## GCN
        self.encoder_nfeat = None # depends on the data type and fold
        self.encoder_layer_dims = [512, 256, 256]
        self.encoder_nout = 128
        self.encoder_softmax = True
        
        self.predictor_nfeat = 256
        self.predictor_layer_dims = [] 
        self.predictor_nout = 2
        
        ### training config
        self.max_epochs = 3000
        self.batch_size = 1
        # self.epochs_test_start = 100
        # self.epochs_test = 100
        self.batches_log = 100
        self.epochs_log = 1
        # self.epochs_save = 100
        self.lr = 0.0001
        # self.milestones = [400, 1000]
        # self.lr_rate = 0.99
