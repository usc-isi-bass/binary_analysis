from binary_analysis_utils import node_from_cfg
from vex_ast import ASTGraph


def try_one_file():
    filename = '../../bin/1/162.exe'
    parts_of_tree = []
    for node, _ in node_from_cfg(filename):
        parts_of_tree.append(ASTGraph(node.block))

try_one_file()
def try_all_files():
    dir_name = '../../bin'
    next(directories)
    trees = []

    for directory in directories:
        for file in directory[2]:
            filename = directory[0] + '/' + file
            parts_of_tree = []
            for node, proj in node_from_cfg(filename):
                try:
                    ast = ASTGraph(node.block)
                    parts_of_tree.append(ast)
                except Exception as err:
                    print ('Unable to parse file {}'.format(filename))
                    print (err)
