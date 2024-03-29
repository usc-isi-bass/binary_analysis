import warnings
def noop(*args, **kargs): pass
warnings.warn = noop

#warnings.filterwarnings("ignore", category=DeprecationWarning) 
import angr
import argparse
import logging
import pickle as pkl
import traceback
from functools import partial
from collections import Counter
from bin2vec.vex_ast import create_graph_from_cfg
logging.getLogger('cle.elf').setLevel('CRITICAL')

class Graph():
    # a class to create graph representation from binary file

    def __init__(self, filename):
        self.filename = filename
        self.graph = None
        self.process_binary_for_graph(self.filename)
        
    
    def process_binary_for_graph(self, filename):
        
        try:
            proj = angr.Project(filename, auto_load_libs=False)
            cfg = proj.analyses.CFGEmulated()
            
        except Exception as ex:
            import sys
            import traceback
            print ("Exception occured while creating the CFGEmulated for file ", filename)
            traceback.print_exc(file=sys.stdout)
            return None
        try:
            graph = create_graph_from_cfg(cfg)
        except Exception as ex:
            import sys
            import traceback
            print ("Exception occured while converting CFG to a graph for file ", filename)
            traceback.print_exc(file=sys.stdout)
            return None 
        self.graph = graph
        return graph


    def read_from_pickle(self, pkl_file, out, save_every, start_from=0):
        SAVE_INTERVAL = save_every
        PRINT_INTERVAL = 100
        with open(pkl_file, 'rb') as f:
            files = pkl.load(f)
        files = sorted(files)
        graphs = []
        if start_from > 0:
            with open(out + '_first_{}'.format(start_from), 'rb') as f:
                graphs = pkl.load(f)
        for i, f in enumerate(files):
            if i <= start_from:
                continue
            if (i!=0) and (i%PRINT_INTERVAL == 0):
                print ('{} processed'.format(i))
            if 'partial.o' == f.split('/')[-1]:
                continue
            try:
                graph = process_binary_for_graph_not_safe(f)        
                graphs.append((f, graph))
            except Exception as err:
                print ("Exception while processing {}".format(f))
                traceback.print_exc()
            if (i!=0) and (i%SAVE_INTERVAL == 0):
                with open(out + '_first_{}'.format(i), 'wb') as f:
                    pkl.dump(graphs, f)
        with open(out, 'wb') as f:
            pkl.dump(graphs, f)
        

    def parse_args_and_call_main(self):
        parser = argparse.ArgumentParser(description='Process binary file-')
        
        input_arguments = parser.add_mutually_exclusive_group(required=True)
        input_arguments.add_argument('-bf', '--binary_filename',
            help='Testing mode: .exe file to read')
        input_arguments.add_argument('-pkl', '--pickle_dir')
        input_arguments.add_argument('-d', '--dirname',
            help='Directory containing binary files')
        parser.add_argument('--num_processes', type=int, default=1)
        parser.add_argument('--save_every', type=int, default=100)
        parser.add_argument('--output', type=str, required=True, help='out filename')
        parser.add_argument('--to_dot', action='store_true', help='store graph in\
        dot format, alternatively stores in pkl')
        parser.add_argument('--start_from', type=int, default=0)

        args = parser.parse_args()

        if args.binary_filename:
            result = process_binary_for_graph(args.binary_filename)
            if args.to_dot:
                import pydot
                from networkx.drawing.nx_pydot import write_dot
                
                write_dot(result, args.output)
            else:
                with open(args.output, 'wb') as f:
                    pkl.dump(result, f)
        elif args.dirname:
            results = read_and_process_dir(
                args.dirname, 
                #num_processes=args.num_processes,
                #out_filename=args.output,
                process_binary_for_graph)
            print ("Writing result to ", args.output)
            with open(args.output, 'wb') as f:
                pkl.dump(results, f)
        elif args.pickle_dir:
            read_from_pickle(args.pickle_dir, args.output, 
                            args.save_every, args.start_from)



