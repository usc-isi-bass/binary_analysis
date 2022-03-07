import argparse
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
from generalization_split import generalizationSplit


def generate_bow(word_counter, vocab):
    keys = list(vocab.keys())
    bow = np.zeros(len(keys))
    for ele in word_counter:
        if ele in keys:
            bow[keys.index(ele)] = word_counter[ele]
    return bow


def sum_word_counters(data, i):
    if i + 1 == len(data):
        return data[i]
    else:
        if data[i] is None  or data[i + 1] is None:
            print (i, 'is NONE HERE')
            print (data)
        return data[i] + data[i + 1]

    
def parallel_create_vocab(data, num_processes):
    new_data = Parallel(n_jobs=num_processes)(delayed(sum_word_counters)(data, i) for i in range(0, len(data), 2))
    return new_data


def create_vocab(data, num_processes):
    vocab = Counter()
    new_data = parallel_create_vocab(data, num_processes)
    while len(new_data) > 2:
        new_data = parallel_create_vocab(new_data, num_processes)
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


def get_vocab(vocab_filename, train_data, num_processes):
    if os.path.isfile(vocab_filename):
        print ('\nLoading vocab from file\n')
        with open(vocab_filename, 'rb') as f:
            vocab = pkl.load(f)
            print ('\nVocab loaded from the file with {} keys\n'.format(len(vocab.keys())))
    else:
        print ('\nCreating a vocabulary....\n')
        smaller_vocabs = []
        for i in range(0, len(train_data), 100):
            print (i)
            smaller_vocabs.append(
                    create_vocab(train_data[i : i + 100], num_processes))
        print ('\nCombining smaller vocabs\n')

        vocab = create_vocab(smaller_vocabs, num_processes)
        print ('\nDone creating the vocabulary, {} keys, writing...\n'.format(len(vocab.keys())))
        with open(vocab_filename, 'wb') as f:
            pkl.dump(vocab, f)
            
        print ('\nVocab written\n')
    return vocab


def main(filename, num_processes, threshold, num_shots):
    np.random.seed(42)
#     experiment = "{}_shot".format(num_shots)
    with open(filename + '.pkl', 'rb') as f:
        BoWs = pkl.load(f)
        print (len(BoWs), ' classes to process in total')

    data = []
    labels = []
    for i in range(len(BoWs)):
        if isinstance(BoWs[i], tuple):
            data_i = BoWs[i][0]
            label = int(BoWs[i][1].strip('bin/'))
        else:
            data_i = BoWs[i]
            label = i 
        n = len(data_i)    
        data.extend(data_i)
        labels.extend(label*np.ones(n))

    split = generalizationExperimentSplitData(data, labels, train_size=50, val_size=25, test_size=None)
    train_data, train_labels, val_data, val_labels, test_data, test_labels = split
        
    vocab_filename = filename + '.vocab_untrimmed_{}'.format(experiment)
    print ('\nVocab filename:{}'.format(vocab_filename))

    vocab = get_vocab(vocab_filename, train_data, num_processes)

    print ('Trimming the vocab with threshold {}'.format(threshold))
    vocab = trim_vocab(vocab, threshold)
    print ('Number of keys in vocab after trimming: {}'.format(len(vocab.keys())))

    pool = Pool(processes=num_processes)
     
    for (counters, labels, name) in data:
        print("\nWorking on generating bow for {}".format(name))
        bow_vectors = pool.map(
                partial(generate_bow, vocab=vocab), counters)
        bow_vectors = sparse.csr_matrix(np.asarray(bow_vectors))
        
        current_filename = filename + ".{}_" + experiment + name + str(threshold)
        with open(current_filename.format("x"), "wb") as f:
            pkl.dump(bow_vectors, f)
        with open(current_filename.format("y"), "wb") as f:
            pkl.dump(labels, f)
            
            
def parse_args_and_call_main():
    parser = argparse.ArgumentParser(description='Process source code')
    parser.add_argument('-i', '--input',
        help='Input pkl file containing word counts(without .pkl extension)', required=True)
    parser.add_argument('--num_processes', type=int, default=8)
    parser.add_argument('--threshold', type=int, default=10)
    parser.add_argument('--num_shots', type=int, default=1)

    args = parser.parse_args()

    main(args.input, args.num_processes, args.threshold, args.num_shots)


if __name__ == '__main__':
    parse_args_and_call_main()