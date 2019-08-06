import numpy as np
import sklearn 

def default_split(BoWs):
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
    return train_word_counts, train_y, val_word_counts, val_y, test_word_counts, test_y
