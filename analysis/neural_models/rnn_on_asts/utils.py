import itertools
import numpy as np
import os
import random
import sys

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
    if not line:
        return '\n', inside_comment_block
    
    return line, inside_comment_block

def clean_file(filename):
    with open(filename, 'r',  errors='ignore') as f:
        lines = ''
        comment = False
        for l in f.readlines():
            l, comment = parse_sc_line(l, comment)
            lines += '\n' + l
        return lines

# def loadData(train_r=8, val_r=1, test_r=1):
#     directories = os.walk('tbcnn_data/')
#     next(directories)
#     trees = []
#     parser = c_parser.CParser()
#     for directory in directories:
#         for file in directory[2]:
#             filename = directory[0] + '/' + file
#             text = clean_file(filename)
#             try:
#                 ast = parser.parse(text, filename)
#                 all_trees = [Tree(e) for e in ast.ext]
#                 tree = combineTrees(all_trees)
#                 tree.label = int(directory[0].split('/')[1])
#                 trees.append(tree)
#             except Exception as err:
#                 print ('Unable to parse file {}'.format(filename))
#                 print (err)
#     return trees

def splitData(data, train_r=3, val_r=1, test_r=1):
    np.random.seed(42)
    data = np.random.permutation(data)
    total_parts = train_r + val_r + test_r
    one_part = len(data) // total_parts
    train_idx = one_part * train_r
    train = data[:train_idx]
    
    val_idx = train_idx + one_part * val_r
    val = data[train_idx:val_idx]
    
    test = data[val_idx:]
    return train, val, test