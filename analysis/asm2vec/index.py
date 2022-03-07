from asm2vec.model import Asm2Vec
from prepare_asm2vec import *
import argparse
import os
from tqdm import tqdm
import gc
from statistics import mean
from sklearn.model_selection import train_test_split

def expriment(d_exp, alpha, train, val_test, train_flags , val_test_flags):
    funcs_per_cwe = {}
    print("training starts for d=", d_exp,"and alpha=", alpha)
    model = Asm2Vec(neg_samples=25, d=d_exp, rnd_walks=10, initial_alpha=alpha)
    train_repo = model.make_function_repo(train)
    model.train(train_repo)
    print("training complete")
    ###########################
    print("estimating starts")
    estimating_funcs_vec = list(map(lambda f: model.to_vec(f), val_test))
    for (ef, efv) in zip(val_test, estimating_funcs_vec):
        estimate_index = val_test.index(ef)
        flag_val_test = val_test_flags[estimate_index]
        func_repo = []
        for tf in train_repo.funcs():
            index = train_repo.funcs().index(tf)
            sim = cosine_similarity(tf.v, efv)
            func_repo.append((tf.sequential().name(), train_flags[index], sim))
        func_repo.sort(key=lambda x: x[-1], reverse=True)
        acc = compute_acc_per_good_bad(flag_val_test, func_repo, 15)
        funcs_per_cwe[(flag_val_test, ef.name())] = acc
        print(acc)
    avg_funcs = compute_avg_per_cwe(funcs_per_cwe)
    print('Estimating complete.')
    return avg_funcs


def find_best_d_alpha(averages):
    averages.sort(key=lambda x: x[2]+x[3], reverse=True)

    return averages[0]




if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('Juliet_binaries', help='path to Juliet binaries')
    args = parser.parse_args()
    training_folder = args.Juliet_binaries
    CWE_functions = []
    wrong_functions = []
    functions_per_cwe = {}
    folder_path = os.getcwd()
    cwes = ['CWE23','CWE36', 'CWE121', 'CWE122', 'CWE124',
            'CWE126', 'CWE127', 'CWE134', 'CWE190', 'CWE191',
            'CWE194', 'CWE195', 'CWE197', 'CWE369', 'CWE400',
            'CWE401', 'CWE415', 'CWE416', 'CWE427', 'CWE457',
            'CWE476', 'CWE563', 'CWE590', 'CWE606', 'CWE617',
            'CWE680', 'CWE690', 'CWE758','CWE761', 'CWE762']

    for root, dirs, files in os.walk(training_folder):
        for file in files:
            full_path = os.path.join(root, file)
            if file.endswith(".o"):
                cwe =[s for s in full_path.split("/") if "CWE" in s]
                if len(cwe):
                    cwe_name = cwe[0].split("_")[0]
                    #print(cwe_name)
                    if cwe_name in cwes:
                        try:
                            result = function_asm(full_path)
                            if result is not None:
                                cfg, entry_node, func_name = result
                                    #print(result)
                                if cfg is not None and entry_node is not None:
                                    flag, function = generate_asm2vec_function(result)
                                    #print(cwe_name, function, result)
                                    if flag is True:
                                        CWE_functions.append((cwe_name, function, full_path))

                                    if flag is False:
                                        wrong_functions.append((cwe_name, function, full_path))
                        except:
                            continue

    for entry in cwes:
        repo_good = []
        repo_bad = []
        for cw, func, path in CWE_functions:
            if entry == cw:
                if 'juliet_bad' in path and func is not None:

                    repo_bad.append(func)
                elif 'juliet_good' in path and func is not None:

                    repo_good.append(func)

        functions_per_cwe[entry] = [(repo_bad, repo_good)]

    training_testing_validation = {}
    CV = 5
    for type in tqdm(functions_per_cwe):
        print(type)
        avg_per_run_bad = []
        avg_per_run_good = []
        for bad_repository, good_repository in functions_per_cwe[type]:

            for i_run in range(CV):
                best_d_alpha = []
                train_idx_bad, val_and_test_idx_bad = train_test_split(np.arange(len(bad_repository)), train_size=0.7, test_size=0.3)
                val_idx_bad, test_idx_bad = train_test_split(val_and_test_idx_bad, train_size=0.5, test_size=0.5)
                train_idx_good, val_and_test_idx_good = train_test_split(np.arange(len(good_repository)), train_size=0.7,test_size=0.3)
                val_idx_good, test_idx_good = train_test_split(val_and_test_idx_bad, train_size=0.5, test_size=0.5)
                ###################################### train data
                train_data_bad = [bad_repository[i] for i in train_idx_bad]
                train_data_good = [good_repository[i] for i in train_idx_good]
                train_data = train_data_bad+train_data_good
                train_flags = [1]*len(train_data_bad)+[0]*len(train_data_good)
                ##################################### validation data
                val_data_bad = [bad_repository[i] for i in val_idx_bad]
                val_data_good = [good_repository[i] for i in val_idx_good]
                val_data = val_data_bad + val_data_good
                val_flags = [1] * len(val_data_bad) + [0] * len(val_data_good)
                #################################### test data
                test_data_bad = [bad_repository[i] for i in test_idx_bad]
                test_data_good = [good_repository[i] for i in test_idx_good]
                test_data = test_data_bad + test_data_good
                test_flags = [1] * len(test_data_bad) + [0] * len(test_data_good)
                ##########################
                print(len(train_data), len(test_data), len(val_data))
                avg_1_bad, avg_1_good= expriment(50, 0.05 , train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((50, 0.05, avg_1_bad , avg_1_good))

                avg_2_bad, avg_2_good  = expriment(50, 0.025, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((50, 0.025, avg_2_bad, avg_2_good))

                avg_3_bad, avg_3_good = expriment(50, 0.01 , train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((50, 0.01, avg_3_bad , avg_3_good))

                avg_4_bad, avg_4_good  = expriment(100, 0.05 , train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((100, 0.05, avg_4_bad , avg_4_good))

                avg_5_bad, avg_5_good= expriment(100, 0.025, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((100, 0.025, avg_5_bad, avg_5_good))

                avg_6_bad, avg_6_good = expriment(100, 0.01, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((100, 0.01,avg_6_bad, avg_6_good))

                avg_7_bad, avg_7_good = expriment(150, 0.05, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((150, 0.05, avg_7_bad, avg_7_good))

                avg_8_bad, avg_8_good= expriment(150, 0.025, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((150, 0.025, avg_8_bad, avg_8_good))

                avg_9_bad, avg_9_good = expriment(150, 0.01 , train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((150, 0.01, avg_9_bad, avg_9_good))

                avg_10_bad, avg_10_good  = expriment(200, 0.05 , train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((200, 0.05, avg_10_bad, avg_10_good))

                avg_11_bad, avg_11_good = expriment(200, 0.025, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((200, 0.025, avg_11_bad, avg_11_good ))

                avg_12_bad, avg_12_good = expriment(200, 0.01, train_data, val_data, train_flags, val_flags)
                best_d_alpha.append((200, 0.01, avg_12_bad, avg_12_good))

                best_d, best_alpha, average_bad, average_good = find_best_d_alpha(best_d_alpha)
                test_average_bad, test_average_good = expriment(best_d, best_alpha, train_data,
                                                                test_data, train_flags, test_flags)
                with open(folder_path + "/" + str(type)+"_" + str(i_run)+'test_averages.txt', mode='w') as f:
                    f.write(str(best_d)+" , "+ str(best_alpha))
                    f.write("\n")
                    f.write(str(test_average_bad)+" , "+str(test_average_good))
                avg_per_run_bad.append(test_average_bad)
                avg_per_run_good.append(test_average_good)

            mean_all_avgs_bad = mean(avg_per_run_bad)
            mean_all_avgs_good = mean(avg_per_run_good)
        with open(folder_path + "/" + str(type)+"_"  + 'final_results.txt', mode='w') as f:
            f.write("final bad"+" : "+str(mean_all_avgs_bad))
            f.write("\n")
            f.write("final good"+ " : "+str(mean_all_avgs_good))

        print("final result for", type, "is", mean_all_avgs_bad, mean_all_avgs_good)

















