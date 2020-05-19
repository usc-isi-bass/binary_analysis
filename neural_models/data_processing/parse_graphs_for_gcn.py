import numpy as np
import networkx as nx
import scipy.sparse as sp


def old_get_node_label_dicts(data, threshold=10):
    node_label_freq = {"UNK": 0}
    for g in data:
        node_labels = np.unique([
            v if type(v) is str else "U64" \
            for v in nx.get_node_attributes(g, 'label').values()])
        for l in node_labels:
            l = strip_number(l)
            if l not in node_label_freq:
                node_label_freq[l] = 0
            node_label_freq[l] += 1

    node_label_idx_dict = {"UNK": 0, "CONST": 1}
    for l, f in node_label_freq.items():
        if f >= threshold:
            node_label_idx_dict[l] = len(node_label_idx_dict)
    return node_label_idx_dict, node_label_freq


# only keep last 2 digits of a number
def get_node_label_dicts_two_digit_numbers(data, threshold=3):
    node_label_freq = {"UNK": 0}
    for g in data:
        node_labels = np.unique([
            v if type(v) is str else "U64" \
            for v in nx.get_node_attributes(g, 'label').values()])
        for l in node_labels:
            l = strip_number(l)
            if is_const(l):
                char_level = split(l)
                l = ''.join(char_level[-2:])
            if l not in node_label_freq:
                node_label_freq[l] = 0
            node_label_freq[l] += 1

    node_label_idx_dict = {"UNK": 0}
    for l, f in node_label_freq.items():
        if f >= threshold:
            node_label_idx_dict[l] = len(node_label_idx_dict)
    return node_label_idx_dict, node_label_freq


# do not keep any constants, replace them with a term CONST
def get_node_label_dicts_const_placeholder(data, threshold=3):
    node_label_freq = {"UNK": 0}
    for g in data:
        node_labels = np.unique(
            [v if type(v) is str else "U64" \
             for v in nx.get_node_attributes(g, 'label').values()])
        for l in node_labels:
            l = strip_number(l)
            if is_const(l):
                l = "CONST"
            if l not in node_label_freq:
                node_label_freq[l] = 0
            node_label_freq[l] += 1

    node_label_idx_dict = {"UNK": 0}
    for l, f in node_label_freq.items():
        if f >= threshold:
            node_label_idx_dict[l] = len(node_label_idx_dict)
    return node_label_idx_dict, node_label_freq


def old_strip_number(l):
    if l.startswith("'reg"):
        l = l.split("_")[0]
    if l.startswith("Source_"):
        l = l.split("_")[0]
    if l.startswith("Sync"):
        l = l.split("_")[0]
    if l.startswith("'t"):
        l = "temp"
    return l


# in the new version I fixed the bug that led to trailing apostrophes
def strip_number(l):
    if l.startswith("reg"):
        l = l.split("_")[0]
    if l.startswith("Source_"):
        l = l.split("_")[0]
    if l.startswith("Sync"):
        l = l.split("_")[0]
    if l.startswith("t"):
        l = "temp"
    return l


def old_convert_to_gcn_features(data, labels,
                                node_label_idx_dict,
                                nb_classes=104):
    adj = []
    features = []

    N = len(labels)
    one_hot_targets = np.zeros((N, nb_classes))
    one_hot_targets[np.arange(N), labels] = 1

    E = len(node_label_idx_dict)
    for g in data:
        adj.append(nx.adjacency_matrix(g))
        one_hot_feature = np.zeros((nx.number_of_nodes(g), E))
        node_labels = nx.get_node_attributes(g, 'label')
        for i, n in enumerate(nx.nodes(g)):
            idx = 0
            l = node_labels.get(n, "UNK")
            if n in node_labels:
                l = node_labels[n]
                if type(l) is not str:
                    l = "U64"
                l = strip_number(l)
                if l in node_label_idx_dict:
                    idx = node_label_idx_dict[l]
                elif l.startswith("0x"):
                    idx = 1
            one_hot_feature[i, idx] = 1
        features.append(sp.csr_matrix(one_hot_feature))
    return np.asarray(adj), np.asarray(features), one_hot_targets


def is_const(k):
    if k.endswith('L'):
        return True
    try:
        int(k)
        return True
    except:
        pass
    try:
        int(k, 16)
        return True
    except:
        pass
    return False


def convert_to_gcn_features_const_placeholder(data, labels,
                                              node_label_idx_dict,
                                              nb_classes=104):
    adj = []
    features = []

    N = len(labels)
    one_hot_targets = np.zeros((N, nb_classes))
    one_hot_targets[np.arange(N), labels] = 1

    E = len(node_label_idx_dict)
    for g in data:
        adj.append(nx.adjacency_matrix(g))
        one_hot_feature = np.zeros((nx.number_of_nodes(g), E))
        node_labels = nx.get_node_attributes(g, 'label')
        for i, n in enumerate(nx.nodes(g)):
            idx = 0
            l = "UNK"
            # if the node has a label:
            if n in node_labels:
                l = node_labels[n]
                if type(l) is not str:
                    l = "U64"
                l = strip_number(l)
                # if the label is a const, trim to last two digits
                if is_const(l):
                    l = "CONST"
            if l in node_label_idx_dict:
                idx = node_label_idx_dict[l]
            one_hot_feature[i, idx] = 1
        features.append(sp.csr_matrix(one_hot_feature))
    return np.asarray(adj), np.asarray(features), one_hot_targets


def is_num(c):
    if c >= '0' and c <= '9':
        return True
    return False


def is_hex_digit(c):
    hex_digits = ['a', 'b', 'c', 'd', 'e', 'f']
    if c.lower() in hex_digits:
        return True
    return False


def split(k):
    res = []
    if k.startswith('0x') or k.startswith('0X'):
        k = k[2:]
    for i in range(len(k)):
        if is_num(k[i]):
            res.append(k[i])
        elif is_hex_digit(k[i]):
            res.append(k[i].lower())
        else:
            if k[i] != 'L':
                print(k, k[i:])
    return res


def convert_to_gcn_features_two_digit_numbers(data, labels,
                                              node_label_idx_dict,
                                              nb_classes=104):
    adj = []
    features = []

    N = len(labels)
    one_hot_targets = np.zeros((N, nb_classes))
    one_hot_targets[np.arange(N), labels] = 1

    E = len(node_label_idx_dict)
    for g in data:
        adj.append(nx.adjacency_matrix(g))
        one_hot_feature = np.zeros((nx.number_of_nodes(g), E))
        node_labels = nx.get_node_attributes(g, 'label')
        for i, n in enumerate(nx.nodes(g)):
            idx = 0
            l = "UNK"
            # if the node has a label:
            if n in node_labels:
                l = node_labels[n]
                if type(l) is not str:
                    l = "U64"
                l = strip_number(l)
                # if the label is a const, trim to last two digits
                if is_const(l):
                    char_level = split(l)
                    l = ''.join(char_level[-2:])
            if l in node_label_idx_dict:
                idx = node_label_idx_dict[l]
            one_hot_feature[i, idx] = 1
        features.append(sp.csr_matrix(one_hot_feature))
    return np.asarray(adj), np.asarray(features), one_hot_targets

