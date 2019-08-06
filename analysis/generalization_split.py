import numpy as np
import numpy.ma as ma

from sklearn.model_selection import train_test_split

def generalizationSplit(BoWs, num_shots):
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

    return makeSplit(data, labels, num_shots=num_shots)


# Get labels function for tree structures
# def getLabels(data):
#     labels = []
#     for d in data:
#         labels.append(d.label)
#     assert len(np.unique(labels)) == 104
#     return labels


def separateUsingMask(data, labels, mask):
    masked_data = ma.masked_array(data, mask=mask)
    masked_labels = ma.masked_array(labels, mask=mask)
    masked_data = ma.compressed(masked_data)
    masked_labels = ma.compressed(masked_labels)
    
    return masked_data, masked_labels

def separateLabelledExamples(data, labels, num_shots, rs):
    train = []
    train_labels = []
    test = []
    test_labels = []
    for label in np.unique(labels):
        data_for_one_label = []
        for di, li in zip(data, labels):
            if li == label:
                data_for_one_label.append(di)
                
        n = len(data_for_one_label)
        train_for_one_label, test_for_one_label, \
            train_labels_for_one_label, test_labels_for_one_label = \
                train_test_split(data_for_one_label, label * np.ones(n),
                                 train_size=num_shots, random_state=rs)
        
        train = np.concatenate((train, train_for_one_label))
        train_labels = np.concatenate((train_labels, train_labels_for_one_label))
        test = np.concatenate((test, test_for_one_label))
        test_labels = np.concatenate((test_labels, test_labels_for_one_label))
        
        assert len(train) == len(train_labels), "There was an error in splitting, {}:{}".format(len(train), len(train_labels))
        assert len(test) == len(test_labels), "There was an error in splitting, {}:{}".format(len(test), len(test_labels))
        
    return (train, train_labels, test, test_labels)
    

def makeSplit(data, labels, train_classes=50, num_shots=5):
    
    data = np.asarray(data)
    labels = np.asarray(labels)
    print("All labels: ", np.unique(labels))
    train_class_labels = np.arange(train_classes)
    print("Training class labels: ", train_class_labels)
    print("Length of all data ", len(data))
    print("Length of all labels ", len(labels))
    
    train_mask = [0 if l in train_class_labels else 1 for l in labels]
    print("Length of the mask ", len(train_mask))
    assert np.all(labels[np.where(not train_mask)] < train_classes)
    train_data, train_labels = separateUsingMask(data, labels, train_mask)
    
    print("Unique labels of training classes data: ", np.unique(train_labels))
    print("Length of training data: ", len(train_data))
    
    # We separate the remaining classes into test and validation datasets,
    # dtest and dval corresponding. From each we will hold out 10 examples
    # for train - d****_train and the remaining will be for evaluation - d****_test
    test_and_val_labels = np.arange(train_classes, max(np.unique(labels)) + 1)
    val_labels = test_and_val_labels[:len(test_and_val_labels)//2]
    test_labels = test_and_val_labels[len(test_and_val_labels)//2:]
    print ("Val class labels: ", val_labels)
    print ("Test class labels: ", test_labels)
    
    dtest_mask = [0 if l in test_labels else 1 for l in labels]    
    assert np.all(labels[np.where(not dtest_mask)] >= train_classes)
    dtest_data, dtest_labels = separateUsingMask(data, labels, dtest_mask)
    dval_mask = [0 if l in val_labels else 1 for l in labels]
    assert np.all(labels[np.where(not dval_mask)] >= train_classes)
    dval_data, dval_labels = separateUsingMask(data, labels, dval_mask)
    
    print("Length of test data: ", len(dtest_data))
    print("Length of validation data: ", len(dval_data))
    
    dtest_train, dtest_train_labels, dtest_test, dtest_test_labels =\
        separateLabelledExamples(dtest_data, dtest_labels, num_shots, rs=13)
    dval_train, dval_train_labels, dval_test, dval_test_labels = \
        separateLabelledExamples(dval_data, dval_labels, num_shots, rs=14)
    
    print ("Size of train dataset: ", len(train_data))
    print ("Size of validation dataset: ", len(dval_train), len(dval_test))
    print ("Size of test dataset: ", len(dtest_train), len(dtest_test))
    
    return (train_data, train_labels, 
            dval_train, dval_train_labels, dval_test, dval_test_labels, 
            dtest_train, dtest_train_labels, dtest_test, dtest_test_labels)


def get_episode(x, y, shots):
    gss = GroupShuffleSplit(n_splits=5, test_size=10)
    splits = list(gss.split(x, groups=y))
    for train_idx, test_idx in splits:
        # now need to take few examples from each class in test and add them to train
        unique_test_labels = np.unique(y[test_idx])
        for l in unique_test_labels:
            class_l_idxs = np.where(y == l)[0]            
            add_to_train_idx = np.random.choice(class_l_idxs, shots)
            train_idx = np.concatenate((train_idx, add_to_train_idx))
            remove_from_test_idx = []
            for i, value in enumerate(test_idx):
                if value in add_to_train_idx:
                    remove_from_test_idx.append(i)
            test_idx = np.delete(test_idx, remove_from_test_idx)
        yield train_idx, test_idx
    