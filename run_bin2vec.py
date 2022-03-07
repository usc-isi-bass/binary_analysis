import argparse
import os
from bin2vec.process_binary_for_graph import Graph
from neural_models.data_processing.parse_graphs_for_gcn import GCN


if __name__ == '__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('binary', help='path to binary folder')
    args = parser.parse_args()
    binary_folder = args.binary
    graphs = []
    labels = []
    ################################################
    # create bin2vec graphs from cfg
    for root, dirs, files in os.walk(binary_folder):
        for file in files:
            full_path = os.path.join(root, file)
            bin2vec_graph = Graph(full_path)
            if 'bad' in full_path:
                graphs.append(bin2vec_graph)
                labels.append(1)
            elif 'good' in full_path:
                graphs.append(bin2vec_graph)
                labels.append(0)
    #################################################
    # preprocess the data and train using gcn
    gcn = GCN(graphs, labels)
    adj , fea , one = gcn.preprocess()
    gcn.train_gcn(adj, fea, one)
    


    


