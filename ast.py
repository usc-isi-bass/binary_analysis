import angr
import networkx as nx
from networkx.drawing.nx_agraph import write_dot


class AST(object):
    """
    Builds an Abstract Syntax Tree representing VEX operations.
    """

    def __init__(self, block):
        """
        :param block: an angr block (i.e., factory.block).
        """

        self.g = nx.Graph()
        for e in list(block.vex.statements):
            import ipdb; ipdb.set_trace()
            if e.tag == 'Ist_Imark':
                continue

            if hasattr(e, 'op'):
                self.g.add_node(e, label=e.op)
                for arg in e.args:
                    self.g.add_node(arg, label=arg.tag)
                    self.g.add_edge(e, arg)

p = angr.Project("ast-example", auto_load_libs=False)
main_addr = p.loader.find_symbol("main").rebased_addr
state = p.factory.blank_state(addr=main_addr)
# s = p.factory.simgr(state)
c = p.analyses.CFGEmulated(keep_state=True)
node = c.get_any_node(main_addr)

ast = AST(node.block)
# write_dot(ast.g, "/tmp/ast.dot")

# cmp=[]
# for a in list(node.final_states[0].history.actions):
#    try:
#        o = a.op
#    except:
#        continue
#    if "Cmp" in o:
#        cmp.append(a)
#


