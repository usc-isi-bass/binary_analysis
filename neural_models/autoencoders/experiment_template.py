import sys
import os
BINREC_PATH = os.getenv('BINREC_PATH') 
sys.path.append('{BINREC_PATH}/neural_models/autoencoders')
sys.path.append('{BINREC_PATH}/neural_models/autoencoders/models')

from args import Args
args = Args()

### CHECK THAT THIS IS A CLEAN REPOSITORY ###
                
EXP_NAME = 
EXP_DATE = 

# different_setups
experiment_setups = [
    {"writer_name": EXP_DATE + "_" + EXP_NAME, 
    "writer_comment":"", 
    "encoder_layer_dims":[], 
    "encoder_nout":0,
    "predictor_layer_dims":[], 
    "predictor_nfeat":0, 
    "print_every":0, 
    "report_metrics":["", ""]}, 
    "loss_log_str": "", 
    "acc_log_str":""
]

from edge_prediction_experiment import main

# copy from experiment setups to args
for current_setup in experiment_setups:
    for name, value in current_setup.items():
        setattr(args, name, value)
        
    # redirect stdout to a file
    sys.stdout = open('{BINREC_PATH}/neural_models/autoencoders/experiment_outs/{EXP_DATE}_{EXP_NAME}_out', 'w', buffering=1)
    # redirect stderr to a file
    sys.stderr = open('{BINREC_PATH}/neural_models/autoencoders/experiment_outs/{EXP_DATE}_{EXP_NAME}_err', 'w', buffering=1)
    main(args)

