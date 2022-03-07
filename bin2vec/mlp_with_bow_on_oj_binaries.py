#!/usr/bin/env python
# coding: utf-8

# In[13]:


# import torch
import angr
import logging
import pickle as pkl
import pyvex
import numpy as np
import os
import sklearn

from collections import Counter
from joblib import Parallel, delayed
from functools import partial
from multiprocessing import Pool
from sklearn.model_selection import train_test_split
from scipy import sparse


logging.getLogger("angr").setLevel("CRITICAL")
logging.getLogger("binai.ast").setLevel('CRITICAL')
logging.getLogger('angr.analyses').setLevel('CRITICAL')
logging.getLogger('cle.loader').setLevel('CRITICAL')
logging.getLogger('cle.backends').setLevel('CRITICAL')


# In[3]:

os.system('taskset -p 0xffffffff %d' % os.getpid())

def node_from_cfg(filename):
    proj = angr.Project(filename, auto_load_libs=False);
    try:
        cfg = proj.analyses.CFG()
    except:
        return    
    for i, n in enumerate(cfg.graph.nodes()):
        if n.block is not None:
            yield n, proj


# In[4]:


def ir_default_to_string(stmt):
    return stmt.__str__()

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
        commands.append(to_string(stmt))
    return commands

def process_binary_for_bow(filename, extract_commands=extract_assembly_commands, to_string=None):
    lines = []
    for node, proj in node_from_cfg(filename):
        lines.extend(extract_commands(node, proj=proj, to_string=to_string))        

    if lines:
        return Counter(lines)
    return None


# In[5]:


def process_file(binary_filename):
    result = process_binary_for_bow(
                binary_filename, 
                extract_commands=extract_ir_commands, 
                to_string=ir_default_to_string)
    return result


# In[6]:


def read_and_process_dir(dir_name):
    results_for_d = []
    files = sorted(os.listdir(dir_name))
    for f in files:
        filename = dir_name + "/" + f
        result = process_file(filename)
        if result is not None:
            results_for_d.append(result)

    print (dir_name, len(results_for_d))
    return results_for_d


# In[7]:


DIRS_TO_SKIP = []

def get_subdir_list(dir_name, DIRS_TO_SKIP):
    sorted_dirs = sorted(os.listdir(dir_name))
    dir_names = []
    for d in sorted_dirs:
        if d.startswith('.'):
            continue
        if int(d) not in DIRS_TO_SKIP:
            dir_names.append(dir_name + '/' + d)
    return dir_names


def create_Counters(d):
    subdirs = get_subdir_list(d, [])
    pool = Pool(processes=12)
    results = pool.map(read_and_process_dir, subdirs)
    return results


# In[ ]:


# counters = create_Counters('bin/')


# In[8]:


# with open('counters.pkl', 'w') as f:
#     pkl.dump(counters, f)
    
with open('counters.pkl', 'r') as f:
    counters = pkl.load(f)

    counters = counters[:50]


# In[9]:


len(counters)


# In[10]:



def sum_word_counters(data, i):
    if i + 1 == len(data):
        return data[i]
    else:
        if data[i] is None  or data[i + 1] is None:
            print (i, 'is NONE HERE')
            print (data)
        return data[i] + data[i + 1]


def parallel_create_vocab(data):
    new_data = Parallel(n_jobs=12)(delayed(sum_word_counters)(data, i) for i in range(0, len(data), 2))
    return new_data

def create_vocab(data):
    vocab = Counter()
    new_data = parallel_create_vocab(data)
    while len(new_data) > 2:
        new_data = parallel_create_vocab(new_data)
    if len(new_data) > 1:
        vocab = new_data[0] + new_data[1]
        if len(new_data) > 2:
            print ('there is an error here, new_data size is larger than 2: ', len(new_data))
    else: 
        vocab = new_data[0]
    return vocab

def trim_vocab(vocab, threshold):
    new_vocab = Counter(vocab)
    for key, value in vocab.most_common():
        if value < threshold:
            del new_vocab[key]
    return new_vocab

def get_vocab(train_data):
    
    print ('creating a vocabulary....')
    smaller_vocabs = []
    for i in range(0, len(train_data), 100):
        print (i)
        smaller_vocabs.append(
                create_vocab(train_data[i : i + 100]))
    print ('combining smaller vocabs')

    vocab = create_vocab(smaller_vocabs)
    return vocab


# In[11]:

def generate_bow(word_counter, vocab):
    keys = vocab.keys()
    bow = np.zeros(len(keys))
    for key, value in word_counter.iteritems():
        if key in keys:
            bow[keys.index(key)] = value
    return bow

def create_BOW_vectors(counters, threshold=10):
    np.random.seed(42)

    train_word_counts = []
    val_word_counts = []
    test_word_counts = []

    train_y = []
    val_y = []
    test_y = []

    for i in range(len(counters)):
        if isinstance(counters[i], tuple):
            wc_array = np.asarray(counters[i][0])
            c = counters[i][1]
            c = c.strip('bin/')
            c = int(c)
        else:
            wc_array = np.asarray(counters[i])
            c = i 

        train_idx, test_idx = train_test_split(np.arange(len(wc_array)), 
                                               train_size=0.8, 
                                               test_size=0.2)
        test_idx, val_idx = train_test_split(test_idx,
                                             train_size=0.5, 
                                             test_size=0.5)
        train_word_counts.extend(wc_array[train_idx])
        train_y.extend(c*np.ones(len(train_idx)))

        test_word_counts.extend(wc_array[test_idx])
        test_y.extend(c*np.ones(len(test_idx)))

        val_word_counts.extend(wc_array[val_idx])
        val_y.extend(c*np.ones(len(val_idx)))
        
    vocab = get_vocab(train_word_counts)
    with open('half_mlp_vocab_untrimmed.pkl', 'w') as f:
        pkl.dump(vocab, f)

    print ('trimming the vocab to {}'.format(threshold))
    vocab = trim_vocab(vocab, threshold)
    print len(vocab.keys())

    pool = Pool(processes=12)

    data = [
        (train_word_counts, train_y, "_train_", ),
        (val_word_counts,val_y, "_val_"), 
        (test_word_counts, test_y, "_test_")
    ]
    bow_data = []
    for (counters, labels, name) in data:
        bow_vectors = pool.map(
                partial(generate_bow, vocab=vocab), counters)
        bow_vectors = sparse.csr_matrix(np.asarray(bow_vectors))
        bow_data.append(bow_vectors)

    return bow_data, data, vocab


# In[ ]:


bow_data, data, vocab = create_BOW_vectors(counters)


# In[ ]:


with open("half_bow_data.pkl", 'w') as f:
    pkl.dump((bow_data, data, vocab), f)
