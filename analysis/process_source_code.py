import argparse
from collections import Counter
from read_from_file import main as read_and_process

def remove_spaces_around_operators(line):
    operators = '+-/*=()[]{};><\'"'
    for op in operators:
        # remove right space
        line = line.replace("{} ".format(op), "{}".format(op))
        # remove left space
        line = line.replace(" {}".format(op), "{}".format(op))
    return line

def remove_comments(line, inside_comment_block):
    if '//' in line:
        ind = line.find('//')
        line = line[:ind]
    
    start_ind = line.find('/*') 
    end_ind = line.find('*/')
    
    if inside_comment_block:
        if end_ind != -1:
            line = line[end_ind + 2:]
            inside_comment_block = False
        else:
            line = ''
    
    if start_ind != -1:
        if end_ind != -1:
            line = line[:start_ind] + line[end_ind + 2:]
        else:
            line = line[:start_ind]
            inside_comment_block = True
    return line, inside_comment_block

def parse_sc_line(line, inside_comment_block=False):
    line, inside_comment_block = remove_comments(line, inside_comment_block)
    line = line.strip()
    line = remove_spaces_around_operators(line)
    
    if not line:
        return None, inside_comment_block
    
    return line, inside_comment_block


def process_source_code_for_bow(filename):
    with open(filename, 'r') as f:
        inside_comment_block = False
        lines = []
        for line in f.readlines():
            line, inside_comment_block = parse_sc_line(line, inside_comment_block)
            lines.append(line)
        counter = Counter(lines)
        return counter
    return None

def parse_args_and_call_main():
    parser = argparse.ArgumentParser(description='Process source code')
    
    input_arguments = parser.add_mutually_exclusive_group(required=True)
    input_arguments.add_argument('-f', '--filename',
        help='Testing mode: single .c file to process')
    input_arguments.add_argument('-d', '--dirname',
        help='Directory containing .c files')
    
    parser.add_argument('--num_processes', type=int, default=1)
    parser.add_argument('--output', type=str, required=True)

    args = parser.parse_args()

    if args.filename:
        process_source_code_for_bow(args.filename)
    elif args.dirname:
        read_and_process(
            args.dirname, 
            args.num_processes, 
            args.output,
            process=process_source_code_for_bow)


if __name__ == '__main__':
    parse_args_and_call_main()
