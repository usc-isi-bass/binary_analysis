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
experiment_setup = [
    {"writer_name": EXP_DATE + "_" + EXP_NAME, 
    "writer_comment":"", 
    "encoder_layer_dims":[], 
    "encoder_nout":0,
    "predictor_layer_dims":[], 
    "predictor_nfeat":0, 
    "print_every":0, 
    "report_metrics":["", ""],
    "loss_log_str": "", 
    "acc_log_str":""}
]

parameters = [
    "p1",   "p2"]
values = [
    ("",    ""),
    ("",    ""),
    ("",    "")]

# from edge_prediction_experiment import main

def get_experiment_args(args, experiment_setup, parameters, values):
    for name, value in experiment_setup:
        setattr(args, name, value)
    for i, set_of_values in enumerate(values):
        args.writer_comment = str(i).zfill(2)
        for param, value in zip(parameters, set_of_values):
            setattr(args, param, value)
        # redirect stdout & stderr to a file
        experiment_outs = '{BINREC_PATH}/neural_models/autoencoders/experiment_outs'
        out_file = '{experiment_outs}/{EXP_DATE}_{EXP_NAME}_{args.writer_comment}_out.txt'
        err_file = '{experiment_outs}/{EXP_DATE}_{EXP_NAME}_{args.writer_comment}_err.txt'
        print ("Redirecting out to {out_file} and err to {err_file}")
        sys.stdout = open(out_file, 'w', buffering=1)
        sys.stderr = open(err_file, 'w', buffering=1)
        print ("Starting experiment {EXP_DATE}_{EXP_NAME}")
        yield args
    # main(args)
