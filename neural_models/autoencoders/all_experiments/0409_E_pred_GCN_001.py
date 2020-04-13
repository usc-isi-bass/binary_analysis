import sys
import os
#
# BINREC_PATH = os.getenv('BINREC_PATH')
# sys.path.append('{BINREC_PATH}/neural_models/autoencoders')
# sys.path.append('{BINREC_PATH}/neural_models/autoencoders/models')

from args import Args

args = Args()

### CHECK THAT THIS IS A CLEAN REPOSITORY ###

EXP_NAME = "E_pred_GCN_001"
EXP_DATE = "0409"

# different_setups
experiment_setup = {"writer_name": EXP_DATE + "_" + EXP_NAME,
     "writer_comment":None,
     "encoder_layer_dims":None,
     "encoder_nout": None,
     "predictor_layer_dims": 32,
     "predictor_nfeat": 2,
     "print_every": 100,
     "report_metrics": ["loss", "acc"]}

parameters = [
    "encoder_layer_dims",   "encoder_nout"]
values = [
    ([1028, 512],           256),
    ([512, 256],            128),
    ([256, 128],            64)]

from neural_models.autoencoders.edge_prediction_experiment import main
for args in get_experiment_args(args, experiment_setup, parameters, values):
    main(args)

