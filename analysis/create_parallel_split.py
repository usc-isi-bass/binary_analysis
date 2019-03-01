import numpy as np
from collections import Counter
import sys
import os
import pickle as pkl
from scipy import sparse
from joblib import Parallel, delayed
from multiprocessing import Pool
from functools import partial


def generate_bow(word_counter, vocab):
    keys = vocab.keys()
    bow = np.zeros(len(keys))
    for key, value in word_counter.iteritems():
        if key in keys:
            bow[keys.index(key)] = value
    return bow

def sum_word_counters(data, i):
    if i + 1 == len(data):
        return data[i]
    else:
        if data[i] is None  or data[i + 1] is None:
            print i, 'is NONE HERE'
            print data
        return data[i] + data[i + 1]

def parallel_create_vocab(data):
    new_data = Parallel(n_jobs=16)(delayed(sum_word_counters)(data, i) for i in range(0, len(data), 2))
    return new_data

def create_vocab(data):
    vocab = Counter()
    new_data = parallel_create_vocab(data)
    while len(new_data) > 2:
        new_data = parallel_create_vocab(new_data)
    if len(new_data) > 1:
        vocab = new_data[0] + new_data[1]
        if len(new_data) > 2:
            print 'there is an error here, new_data size is larger than 2: ', len(new_data)
    else: 
        vocab = new_data[0]
    return vocab

def trim_vocab(vocab, threshold):
    new_vocab = Counter(vocab)
    for key, value in vocab.most_common():
        if value < threshold:
            del new_vocab[key]
    return new_vocab

def main(argv):
    train_word_counts = []
    train_y = []
    val_word_counts = []
    val_y = []
    test_word_counts = []
    test_y = []
    np.random.seed(42)
    with open(argv[1] + '.pkl', 'r') as f:
        BoWs = pkl.load(f)
    
    if len(argv) > 2:
        threshold = int(argv[2])
    else:
        threshold = 10

    vocab_filename = argv[1]
    if len(argv) > 3:
        limit_labelled_data = int(argv[3])
        num_per_class = limit_labelled_data / len(BoWs)
        print 'every class in training will be limited to ', num_per_class
        vocab_filename += '_' + str(limit_labelled_data)
    else:
        limit_labelled_data = -1
        num_per_class = 1000

    print len(BoWs), ' classes to process in total'
    for i in range(len(BoWs)):
        if isinstance(BoWs[i], tuple):
            wc_array = BoWs[i][0]
            c = BoWs[i][1]
            c = c.strip('bin/')
            c = int(c)
            #print c
        else:
            wc_array = BoWs[i]
            c = i 
        #print len(wc_array), ' examples in each class'
        r = wc_array
        
        np.random.shuffle(r)
        one_part = int(len(r)/10)
        
        train_size = one_part * 8
        train_word_counts.extend(
                r[:min(train_size, num_per_class)])
        train_y.extend(
                c*np.ones(min(train_size, num_per_class)))
        
        val_size = one_part + train_size
        val_word_counts.extend(r[train_size:val_size])
        val_y.extend(c*np.ones(one_part))
        
        test_word_counts.extend(r[val_size:])
        test_y.extend(c*np.ones(len(r) - val_size))
        print (c, min(train_size, num_per_class)), 
        
    data = [train_word_counts, val_word_counts, test_word_counts]
    target = [train_y, val_y, test_y]
    
    print (len(data[0]), len(target[0]),
           len(data[1]), len(target[1]),
           len(data[2]), len(target[2]))
    
    for i in range(len(data)):
        data[i] = np.asarray(data[i])
        target[i] = np.asarray(target[i])
        idx = np.arange(len(data[i]))
        np.random.shuffle(idx)
        data[i] = data[i][idx]
        target[i] = target[i][idx]

        
    vocab_filename = argv[1] + '.vocab_untrimmed'
    print 'vocab_filename:', vocab_filename

    if os.path.isfile(vocab_filename):
        with open(vocab_filename, 'r') as f:
            vocab = pkl.load(f)
            print 'vocab loaded from the file'
            print (len(vocab.keys()))
    else:
        print 'creating a vocabulary....'
        smaller_vocabs = []
        for i in range(0, len(data[0]), 100):
            print (i)
            smaller_vocabs.append(
                    create_vocab(data[0][i : i + 100]))
        print ('combining smaller vocabs')
        vocab = create_vocab(smaller_vocabs)
        with open(vocab_filename, 'w') as f:
            pkl.dump(vocab, f)
        print 'vocab written'
    print ('trimming the vocab to {}'.format(threshold))
    vocab = trim_vocab(vocab, threshold)
    print len(vocab.keys())

    pool = Pool(processes=16)
    
    names = ["_train_", "_val_", "_test_"]
    for i in range(len(data)):
        name = names[i]
        di = pool.map(
                partial(generate_bow, vocab=vocab), data[i])
        di = np.asarray(di)
        di = sparse.csr_matrix(di)
        
        ti = target[i]
        filename = argv[1]
        if limit_labelled_data > 0:
            filename += "_" + str(limit_labelled_data)
        
        filename += ".{}" + name + str(threshold)
        with open(filename.format("x"), "w") as f:
            pkl.dump(di, f)
        with open(filename.format("y"), "w") as f:
            pkl.dump(ti, f)


if __name__ == '__main__':
    main(sys.argv)
