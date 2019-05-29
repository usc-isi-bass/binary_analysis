import angr
import argparse
import pickle as pkl
from functools import partial
from collections import Counter

from read_from_file import main as read_and_process
from vex_ast import create_graph_from_cfg

def process_binary_for_graph(filename):
    proj = angr.Project(filename, auto_load_libs=False);
    try:
        cfg = proj.analyses.CFG()
        graph = create_graph_from_cfg(cfg)
    except:
        return None 
    return graph

def parse_args_and_call_main():
    parser = argparse.ArgumentParser(description='Process binary file-')
    
    input_arguments = parser.add_mutually_exclusive_group(required=True)
    input_arguments.add_argument('-bf', '--binary_filename',
        help='Testing mode: .exe file to read')
    input_arguments.add_argument('-d', '--dirname',
        help='Directory containing binary files')
    parser.add_argument('--num_processes', type=int, default=1)
    parser.add_argument('--output', type=str, required=True, help='out filename')

    args = parser.parse_args()

    if args.binary_filename:
        result = process_binary_for_graph(
            args.binary_filename)
        with open(args.output, 'w') as f:
            pkl.dump(result, f)
    else:
        read_and_process(
            args.dirname, 
            num_processes=args.num_processes,
            out_filename=args.output,
            process=process_binary_for_graph)

if __name__ == '__main__':
    parse_args_and_call_main()

