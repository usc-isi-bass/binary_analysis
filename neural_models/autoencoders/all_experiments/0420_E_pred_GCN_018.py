from ..args import Args
from ..experiment_template import get_experiment_args
from ..edge_prediction_experiment import main

args = Args()

### CHECK THAT THIS IS A CLEAN REPOSITORY ###

args.EXP_NAME = "E_pred_GCN_018"
args.EXP_DATE = "0420"

# different_setups
experiment_setup = {"writer_name": args.EXP_DATE + "_" + args.EXP_NAME,
                    "writer_comment": None,

                    "batches_log": 100,
                    "batch_size": 8,
                    "encoder_layer_dims": [32, 32, 32, 32, 32],
                    "encoder_nout": 32,
                    "epochs_save": 1,
                    "epochs_test": 1,
                    "epochs_test_start": 1,

                    "undirected_graphs": None,}

parameters = ["undirected_graphs"]
values = [(True, ),]

for args in get_experiment_args(args, experiment_setup, parameters, values):
    main(args)
