import pickle as pkl
from joblib import dump, load
from sklearn import svm
from sklearn.metrics import accuracy_score, make_scorer
from sklearn.model_selection import GridSearchCV
import sys
import time
import numpy as np

def get_cv(X):
    n = X.shape[0]
    idx = np.random.choice(np.arange(n), n/5, replace=True)
    split_point = len(idx)/5
    train_idx = idx[:split_point]
    test_idx = idx[split_point:]
    yield train_idx, test_idx

def main():
    if len(sys.argv) > 2:
        threshold = sys.argv[2]
    else:
        threshold = 10
    with open(sys.argv[1] + '.x_train_' + str(threshold), 'r') as f:
        x_train = pkl.load(f)
    with open(sys.argv[1] + '.y_train_' + str(threshold), 'r') as f:
        y_train = pkl.load(f)
    with open(sys.argv[1] + '.x_val_' + str(threshold), 'r') as f:
        x_val = pkl.load(f)
    with open(sys.argv[1] + '.y_val_' + str(threshold), 'r') as f:
        y_val = pkl.load(f)
    with open(sys.argv[1] + '.x_test_' + str(threshold), 'r') as f:
        x_test = pkl.load(f)
    with open(sys.argv[1] + '.y_test_' + str(threshold), 'r') as f:
        y_test = pkl.load(f)
    if len(sys.argv) > 3:
        clf = load(sys.argv[3])
    else:
        svc = svm.SVC(decision_function_shape='ovr')

        parameters = {'C':[0.1, 1, 10, 100], 'gamma':[0.01, 0.001, 0.1, 'scale']}
        clf = GridSearchCV(cv=get_cv(x_train), error_score=0,
            estimator=svc, param_grid=parameters, 
            n_jobs=16, scoring=make_scorer(accuracy_score))
    
        clf.fit(x_train, y_train)
        filename = "models/RBF_SVC_" + str(int(time.time())) + ".joblib"
        dump(clf.best_estimator_, filename)
    print clf.best_estimator_
    
    print 'training ACC: ', accuracy_score(y_train, clf.predict(x_train))
    print 'val ACC: ', accuracy_score(y_val, clf.predict(x_val))
    print 'test ACC: ', accuracy_score(y_test, clf.predict(x_test))


if __name__ == "__main__":
    main()
