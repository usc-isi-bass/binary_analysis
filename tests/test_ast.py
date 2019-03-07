import os
import sys
import angr
import logging

# Workaround for stupid Python 3's import system that won't let us to relative
# imports....
proj_location = str(os.path.join(os.path.dirname(os.path.realpath(__file__)), '..'))
sys.path.append(proj_location)
from analysis.vex_ast import ASTGraph

l = logging.getLogger("binai.ast").setLevel(logging.DEBUG)
binary = os.path.join(proj_location, "binaries/ast-example")
p = angr.Project(binary, auto_load_libs=False)
main_addr = p.loader.find_symbol("main").rebased_addr

c = p.analyses.CFGEmulated(keep_state=True)
node = c.get_any_node(main_addr)

# Create an ASTGraph of the first instruction only
ast = ASTGraph(node.block, instructions=1)
ast.to_dot("/tmp/ast.dot")


