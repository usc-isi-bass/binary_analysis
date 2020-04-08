
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
        self.predictor = 'mlp'
        
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
        
        self.predictor_nfeat = 2*self.encoder_nout
        self.predictor_layer_dims = [] 
        self.encoder_nout = 2
        
        ### training config
        self.epochs = 3000 # now one epoch means self.batch_ratio x batch_size
        # self.epochs_test_start = 100
        # self.epochs_test = 100
        # self.epochs_log = 100
        # self.epochs_save = 100

        self.lr = 0.0001
        # self.milestones = [400, 1000]
        # self.lr_rate = 0.99

        # self.sample_time = 2 # sample time in each time step, when validating

        ### output config
#         self.dir_input = "./"
#         self.model_save_path = self.dir_input + 'model_save/' # only for nll evaluation
#         self.graph_save_path = self.dir_input + 'graphs/'
#         self.figure_save_path = self.dir_input + 'figures/'
#         self.timing_save_path = self.dir_input + 'timing/'
#         self.figure_prediction_save_path = self.dir_input + 'figures_prediction/'
#         self.nll_save_path = self.dir_input+'nll/'


#         self.load = False # if load model, default lr is very low
#         self.load_epoch = 3000
#         self.save = True


        ### baseline config
        # self.generator_baseline = 'Gnp'
#         self.generator_baseline = 'BA'

        # self.metric_baseline = 'general'
#         self.metric_baseline = 'degree'
#         self.metric_baseline = 'clustering'


        ### filenames to save intemediate and final outputs
#         self.fname = self.note + '_' + self.graph_type + '_' + str(self.num_layers) + '_' + str(self.hidden_size_rnn) + '_'
#         self.fname_pred = self.note+'_'+self.graph_type+'_'+str(self.num_layers)+'_'+ str(self.hidden_size_rnn)+'_pred_'
#         self.fname_train = self.note+'_'+self.graph_type+'_'+str(self.num_layers)+'_'+ str(self.hidden_size_rnn)+'_train_'
#         self.fname_test = self.note + '_' + self.graph_type + '_' + str(self.num_layers) + '_' + str(self.hidden_size_rnn) + '_test_'
#         self.fname_baseline = self.graph_save_path + self.graph_type + self.generator_baseline+'_'+self.metric_baseline

