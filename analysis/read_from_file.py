import argparse
import os
import pickle as pkl

from functools import partial
from multiprocessing import Pool

def do_nothing():
    return None


def read_and_process_dir(dir_name, process_file):
    results_for_d = []
    files = sorted(os.listdir(dir_name))
    for f in files:
        filename = dir_name + "/" + f
        result = process_file(filename)

        if result is not None:
            results_for_d.append(result)
    
    print dir_name, len(results_for_d)
    return results_for_d


def read_dirs_to_skip():
    DIRS_TO_SKIP = []
    with open('dirs_to_skip.txt', 'r') as f:
        for line in f.readlines():
            DIRS_TO_SKIP.append(int(line))
    return DIRS_TO_SKIP
    #return []


def get_subdir_list(dir_name, DIRS_TO_SKIP):
    sorted_dirs = sorted(os.listdir(dir_name))
    dir_names = []
    for d in sorted_dirs:
        if d.startswith('.'):
            continue
        if int(d) not in DIRS_TO_SKIP:
            dir_names.append(dir_name + '/' + d)
    print dir_names
    return dir_names


def main(d, num_processes=1, out_filename=None, process=do_nothing):
    dirs_to_skip = read_dirs_to_skip()

    subdirs = get_subdir_list(d, dirs_to_skip)
    pool = Pool(processes=num_processes)
    print 'need to process {} dirs in total'.format(len(subdirs))
    print(process)
    results = pool.map(partial(read_and_process_dir, process_file=process), subdirs)
   # print(results)
    if out_filename is not None:
        with open(out_filename, 'w') as f:
            pkl.dump(results, f)
    return results


def parse_args_and_call_main():
    parser = argparse.ArgumentParser(description='Read files from directory')
    parser.add_argument('-d', '--dir', help='dir to read')
    parser.add_argument('--num_processes', type=int, default=1)

    args = parser.parse_args()

    main(args.dir, args.num_processes)

if __name__ == '__main__':
    parse_args_and_call_main()
