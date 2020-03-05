import argparse
import pyvex
import pickle as pkl
import traceback
from functools import partial
from collections import Counter

from binary_analysis_utils import node_from_cfg
from binary_analysis_utils import ir_default_to_string, ir_generalized_to_string
from read_from_file import main as read_and_process


def remove_comments(line):
    if ';' in line:
        print ("the line contains an assembly comment: ", line)
        # take everything before the comment
        line = line.split(';')[0]
        print ("the comment has been removed: ", line)
    return line


def extract_assembly_commands(node, proj=None, to_string=None):

    if to_string is not None:
        raise 'Generalized version of commands for assembly is not implemented'
    commands = []
    for line in str(node.block.capstone).split('\n'):
        line = remove_comments(line) 
        # remove address of the command           
        line_parts = line.split(':')
        commands.append(line_parts[1]) 
    return commands


def extract_ir_commands(node, proj, to_string=ir_default_to_string):
    commands = []
    irsb = proj.factory.block(node.addr).vex
    for stmt in irsb.statements:
        if isinstance(stmt, pyvex.IRStmt.IMark):
            continue
        if isinstance(stmt, pyvex.IRStmt.AbiHint):
            continue
        print (to_string(stmt))
        commands.append(to_string(stmt))
    return commands


def process_binary_for_bow(filename, extract_commands=extract_assembly_commands, to_string=None):
    lines = []
    for node, proj in node_from_cfg(filename):
        lines.extend(extract_commands(node, proj=proj, to_string=to_string))        

    if lines:
        return Counter(lines)
    return None


def parse_args_and_call_main():
    parser = argparse.ArgumentParser(description='Process binary file-')
    
    input_arguments = parser.add_mutually_exclusive_group(required=True)
    input_arguments.add_argument('-bf', '--binary_filename',
        help='Testing mode: .exe file to read')
    input_arguments.add_argument('-d', '--dirname',
        help='Directory containing binary files')
    
    ir_arguments = parser.add_argument_group()
    ir_arguments.add_argument('-ir', '--ir', action='store_true', 
        help='Extract commands from IR, otherwise assembly is used', )
    ir_arguments.add_argument('-g', '--generalize', action='store_true',
        help='Replace numerical constants and literals with placeholders CONST/LIT')

    parser.add_argument('--num_processes', type=int, default=1)
    parser.add_argument('--output', type=str, required=True, help='out filename')

    args = parser.parse_args()

    if args.ir:
        extract_commands = extract_ir_commands
        if args.generalize:
            to_string = ir_generalized_to_string
        else:
            to_string = ir_default_to_string
    else:
        if args.generalize:
            raise "Generalized printing is not implemented for plain assembly yet"
        extract_commands = extract_assembly_commands
        to_string = None

    if args.binary_filename:
        result = process_binary_for_bow(
            args.binary_filename, 
            extract_commands=extract_commands, 
            to_string=to_string)
        with open(args.output, 'w') as f:
            pkl.dump(result, f)
    else:
        processing_func = partial(process_binary_for_bow, 
            extract_commands=extract_commands, to_string=to_string)
        read_and_process(
            args.dirname, 
            num_processes=args.num_processes,
            out_filename=args.output,
            process=processing_func)

        
if __name__ == '__main__':
    parse_args_and_call_main()

