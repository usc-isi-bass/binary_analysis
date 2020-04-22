from ..args import Args
from ..experiment_template import get_experiment_args
from ..edge_prediction_experiment import main

args = Args()

### CHECK THAT THIS IS A CLEAN REPOSITORY ###

args.EXP_NAME = "E_pred_MLP_007"
args.EXP_DATE = "0422"

# different_setups
experiment_setup = {"writer_name": args.EXP_DATE + "_" + args.EXP_NAME,
                    "writer_comment": None,

                    "batches_log": 100,
                    "batch_size": 16,
                    "encoder": "no_encoder",
                    "epochs_save": 1,
                    "epochs_test": 1,
                    "epochs_test_start": 1,
                    "max_epochs": 4,
                    "predictor_layer_dims": [5000, 1000, 500, 100],

                    "num_edges": None}

parameters = ["num_edges"]
values = [(100, ), (500, ), (1000, ), (3000,)]


for args in get_experiment_args(args, experiment_setup, parameters, values):
    main(args)
