from vex_ast import AST
import angr

p = angr.Project("ast-example", auto_load_libs=False)
main_addr = p.loader.find_symbol("main").rebased_addr

c = p.analyses.CFGEmulated(keep_state=True)
node = c.get_any_node(main_addr)

ast = AST(node.block)
ast.to_dot("/tmp/ast.dot")


