import angr
import numpy as np
from asm2vec.asm import BasicBlock
from asm2vec.asm import Function
from asm2vec.asm import parse_instruction
from statistics import mean
from typing import *

def add_instr_to_node(angr_node, asm2vec_node):
    if angr_node.block is not None:
        for instr in angr_node.block.capstone.insns:

            instruct = instr.mnemonic + " " + instr.op_str

            asm2vec_node.add_instruction(parse_instruction(instruct))
    return asm2vec_node

def create_asm2vec_function(entry_node, cfg, func_name):
    created_blocks = {}
    asm2vec_entrynode = BasicBlock()
    asm2vec_entrynode = add_instr_to_node(entry_node,asm2vec_entrynode)
    created_blocks[entry_node] = asm2vec_entrynode

    for src, dsc in cfg.graph.edges():
        if src in created_blocks.keys():

            asm2vec_block = created_blocks[src]
            if dsc in created_blocks.keys():

                asm2vec_succ = created_blocks[dsc]
                asm2vec_block.add_successor(asm2vec_succ)

            else:

                asm2vec_succ = BasicBlock()
                asm2vec_succ = add_instr_to_node(dsc, asm2vec_succ)
                asm2vec_block.add_successor(asm2vec_succ)
                created_blocks[dsc] = asm2vec_succ

        else:

            asm_block = BasicBlock()

            asm_block = add_instr_to_node(src,asm_block)
            created_blocks[src] = asm_block

            if dsc in created_blocks.keys():

                asm2vec_succ = created_blocks[dsc]
                asm_block.add_successor(asm2vec_succ)
            else:
                asm2vec_succ = BasicBlock()
                asm2vec_succ =add_instr_to_node(dsc, asm2vec_succ)
                asm_block.add_successor(asm2vec_succ)
                created_blocks[dsc] = asm2vec_succ

    f = Function(asm2vec_entrynode, func_name)
    #breakpoint()
    length = f.__len__()
    return f

def walk_cfg(cfg, entry_node, visitied):
    visitied.add(entry_node)
    for succ in cfg.model.get_successors(entry_node, excluding_fakeret=False):
        visitied.add(succ)
        walk_cfg(cfg, succ, visitied)
    return visitied


def walk_asm(entry: BasicBlock, visited: Set) -> Set:

    visited.add(entry)
    #print(visited)
    for successor in entry.successors():
        visited.add(successor)
        walk_asm(successor,  visited)
    return visited
def count_instr_angr(cfg):
    counter = 0
    instructions = []
    for node in cfg.graph.nodes():
        if node.block is not None:
            for instr in node.block.capstone.insns:
                instructions.append(instr)
                counter += 1
    return counter

def equal_entry(angr_entry, asm_entry):
    counter = 0
    len_angr = len(angr_entry.block.capstone.insns)
    len_asm = len(asm_entry.instructions())
    if len_asm != len_angr:
        return False
    for instr in angr_entry.block.capstone.insns:
        # index = entry_node.block.capstone.insns.index(instr)
        ins = asm_entry.instructions()[counter]
        if ins.op() != instr.mnemonic:
            return False
        counter += 1

    return True

def equal_len(len_angr, len_asm):
    if len_angr == len_asm:
        return True
    return False

def create_function_cfg(binary, function):
    #print(binary)
    proj = angr.Project(binary, load_options={'auto_load_libs': False})
    function_symbol = proj.loader.find_symbol(function)
    #print(function_symbol)
    if function_symbol is not None:
        cfg = proj.analyses.CFGEmulated(start=function_symbol.rebased_addr, call_depth=1, normalize=True)
        entry_node = cfg.model.get_any_node(proj.entry)
        #print(entry_node)
        return cfg , entry_node
    else:
        return None
def generate_asm2vec_function(result):

    cfg, entry_node, func = result

    # breakpoint()
    asm_func = create_asm2vec_function(entry_node, cfg, func)
    if equal_entry(entry_node, asm_func.entry()) and equal_len(count_instr_angr(cfg),
                                                               asm_func.__len__()):
        return True, asm_func

    if not equal_entry(entry_node, asm_func.entry()) or not equal_len(count_instr_angr(cfg),
                                                                      asm_func.__len__()):
        return False, func





def asm2vec_model(binaries_function):
    training_repository = []
    functions_per_cwe = []
    wrong_functions = []
    functions_not_found = []
    load_binaries = []
    unload_binaries = []
    cwes = []
    for func , full_path, cwe in binaries_function:
        try:
            cfg, entry_node = create_function_cfg(full_path, func)
            load_binaries.append((func, full_path, cwe))
        except:
            unload_binaries.append((func, full_path, cwe))
            continue
        if cfg is not None and entry_node is not None:
            #breakpoint()
            asm_func = create_asm2vec_function(entry_node, cfg, func)
            if equal_entry(entry_node, asm_func.entry()) and equal_len(count_instr_angr(cfg),
                                                                              asm_func.__len__()):
                training_repository.append(asm_func)
                functions_per_cwe.append((cwe, asm_func, full_path))
                cwes.append(cwe)
            # print(type(asm_func.entry().instructions()))
            # print(type(entry_node.block.capstone.insns))
            if not equal_entry(entry_node, asm_func.entry()) or not equal_len(count_instr_angr(cfg),
                                                                              asm_func.__len__()):
                wrong_functions.append((func, full_path, cwe))
        else:
            functions_not_found.append((func, full_path, cwe))

    return training_repository, functions_per_cwe, wrong_functions, unload_binaries, load_binaries, functions_not_found, cwes

def function_asm(binary):

    functions = []
    p = angr.Project(binary, load_options={'auto_load_libs': False})
    obj = p.loader.main_object
    symbols = obj.symbols_by_name
    if "juliet_bad" in binary:
        for sym in symbols:
            if "bad" in sym:
                #print(sym)
                function_symbol = p.loader.find_symbol(sym)
                #print(function_symbol)
                if function_symbol is not None:
                    cfg = p.analyses.CFGEmulated(start=function_symbol.rebased_addr, call_depth=1, normalize=True)
                    entry_node = cfg.model.get_any_node(p.entry)
                    return cfg, entry_node, sym

    elif "juliet_good" in binary:
        for sym in symbols:
            if "good" in sym:
                function_symbol = p.loader.find_symbol(sym)
                if function_symbol is not None:
                    cfg = p.analyses.CFGEmulated(start=function_symbol.rebased_addr, call_depth=1, normalize=True)
                    entry_node = cfg.model.get_any_node(p.entry)
                    return cfg, entry_node, sym
    return None

def cosine_similarity(v1, v2):
    return np.dot(v1, v2) / (np.linalg.norm(v1) * np.linalg.norm(v2))

def compute_similarity_each_cwe(cwe, sim_per_cwe, top_k):
    func_acc = {}
    for func in sim_per_cwe:
        acc = compute_acc(sim_per_cwe[func], cwe, top_k)
        func_acc[func] = acc
    return func_acc



def compute_similarity(similarity_per_cwe, top_k):
    func_acc = {}
    cwe_func = {}
    for cwe in similarity_per_cwe:
        for func in similarity_per_cwe[cwe]:
            acc = compute_acc(similarity_per_cwe[cwe][func], cwe, top_k)
            func_acc[func] = acc
        cwe_func[cwe] = func_acc
        func_acc = {}

    return cwe_func

def compute_acc(func_sim, cwe, top_k):
    counter = 0
    for i in range(top_k):
        cw, func_name, sim = func_sim[i]
        if cwe == cw:
            counter+=1
    return counter/top_k

def compute_average(cwe_acc):
    sum_per_cwe = 0
    cwe_avg = {}
    for cwe in cwe_acc:
        for func in cwe_acc[cwe]:
            sum_per_cwe = sum_per_cwe + cwe_acc[cwe][func]
        #avg = sum/len(cwe_acc[cwe])
        #cwe_avg[cwe] = avg
        count = len(cwe_acc[cwe])
        if count > 0:
            avg = sum_per_cwe/count
            cwe_avg[cwe] = avg
            sum_per_cwe = 0
    return cwe_avg

def compute_average_per_cwe(func_acc):
    sum_per_cwe = 0
    for func in func_acc:
        sum_per_cwe = sum_per_cwe + func_acc[func]
    count = len(func_acc)
    if count > 0:
        avg = sum_per_cwe / count
        return avg


def compute_acc_per_good_bad(val_test_flag, retrevied_functions, top_k):
    counter_good = 0
    counter_bad = 0
    if val_test_flag == 1:
        for i in range(top_k):
            name, flag , sim = retrevied_functions[i]
            if flag == 1:
                counter_bad+=1
        return counter_bad/top_k
    elif val_test_flag ==0:
        for i in range(top_k):
            name, flag, sim = retrevied_functions[i]
            if flag == 0:
                counter_good+=1
        return counter_good/top_k


def compute_avg_per_cwe(funcs_per_cwe):
    bad_accs = []
    good_accs = []
    print("fun_per_cwe", funcs_per_cwe)
    for flag , func in funcs_per_cwe:
        if flag == 1:
            bad_accs.append(funcs_per_cwe[(flag, func)])
        if flag == 0:
            good_accs.append(funcs_per_cwe[(flag, func)])
    return mean(bad_accs), mean(good_accs)







