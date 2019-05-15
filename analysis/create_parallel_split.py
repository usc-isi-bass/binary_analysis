import numpy as np
import os
import pickle as pkl
import sklearn
import sys

from collections import Counter
from functools import partial
from joblib import Parallel, delayed
from multiprocessing import Pool
from scipy import sparse


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


def get_vocab(vocab_filename, train_data):
    if os.path.isfile(vocab_filename):
        with open(vocab_filename, 'r') as f:
            vocab = pkl.load(f)
            print 'vocab loaded from the file'
            print (len(vocab.keys()))
    else:
        print 'creating a vocabulary....'
        smaller_vocabs = []
        for i in range(0, len(train_data), 100):
            print (i)
            smaller_vocabs.append(
                    create_vocab(train_data[i : i + 100]))
        print ('combining smaller vocabs')

        vocab = create_vocab(smaller_vocabs)
        with open(vocab_filename, 'w') as f:
            pkl.dump(vocab, f)
            
        print 'vocab written'
    return vocab

def main(argv):
    np.random.seed(42)
    
    with open(argv[1] + '.pkl', 'r') as f:
        BoWs = pkl.load(f)
        print (len(BoWs), ' classes to process in total')
    
    if len(argv) > 2:
        threshold = int(argv[2])
    else:
        threshold = 10
       
    train_word_counts = []
    val_word_counts = []
    test_word_counts = []

    train_y = []
    val_y = []
    test_y = []
    
    for i in range(len(BoWs)):
        if isinstance(BoWs[i], tuple):
            wc_array = BoWs[i][0]
            c = BoWs[i][1]
            c = c.strip('bin/')
            c = int(c)
        else:
            wc_array = BoWs[i]
            c = i 
            
        train_idx, test_idx = sklearn.model_selection.train_test_split(np.arange(len(wc_array)), 
                                                                       train_size=0.8, 
                                                                       test_size=0.2)
        test_idx, val_idx = sklearn.model_selection.train_test_split(test_idx, 
                                                                     train_size=0.5, 
                                                                     test_size=0.5)
        train_word_counts.extend(wc_array[train_idx])
        train_y.extend(c*np.ones(len(train_idx)))
        
        test_word_counts.extend(wc_array[test_idx])
        test_y.extend(c*np.ones(len(test_idx)))
        
        val_word_counts.extend(wc_array[val_idx])
        val_t.extend(c*np.ones(len(val_idx)))
        
    vocab_filename = argv[1] + '.vocab_untrimmed'
    print ('vocab_filename:', vocab_filename)

    vocab = get_vocab(vocab_filename, train_word_counts)

    print ('trimming the vocab to {}'.format(threshold))
    vocab = trim_vocab(vocab, threshold)
    print len(vocab.keys())

    pool = Pool(processes=16)
            
    data = [
        (train_word_counts, train_y, "_train_"),
        (val_word_counts,val_y, "_val_"), 
        (test_word_counts, test_y, "_test_")
    ]
    for (counters, labels, name) in data:
        bow_vectors = pool.map(
                partial(generate_bow, vocab=vocab), counters)
        bow_vectors = sparse.csr_matrix(np.asarray(bow_vectors))
        
        filename = argv[1]
        
        filename += ".{}" + name + str(threshold)
        with open(filename.format("x"), "w") as f:
            pkl.dump(bow_vectors, f)
        with open(filename.format("y"), "w") as f:
            pkl.dump(labels, f)


if __name__ == '__main__':
    main(sys.argv)
