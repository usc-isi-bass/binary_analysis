from ..analyses import ASTGraph
import angr
import logging

l = logging.getLogger("binai.ast").setLevel(logging.DEBUG)
p = angr.Project("ast-example", auto_load_libs=False)
main_addr = p.loader.find_symbol("main").rebased_addr

c = p.analyses.CFGEmulated(keep_state=True)
node = c.get_any_node(main_addr)

ast = ASTGraph(node.block, instructions=1)
ast.to_dot("/tmp/ast.dot")


