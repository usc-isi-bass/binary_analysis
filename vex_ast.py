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
        for s in list(block.vex.statements):
            # Skip instruction marks
            if s.tag == 'Ist_IMark':
                continue

            self._expr_to_nodes(s)
            # Get all expressions as part of each statement
            for e in s.expressions:
                # It is an operation
                self._expr_to_nodes(e)
                self.g.add_edge(s, e)

    def _expr_to_nodes(self, e):
        """
        For IR expressions reading/writing to regs or temps.
        We'll create a node for the expression itself, and a node for the reg or
        temp involved.
        :param e": a pyvex IR expression
        """

        # If the expression is an operation
        if hasattr(e, 'op'):
            # Then it has a special label 'op'
            self.g.add_node(e, label=e.op)
            # And it has other expressions as arguments
            for arg in e.args:
                self._expr_to_nodes(arg) # recursive
                #self.g.add_edge(e, arg) # not useful
        else:
            # For the rest of expressions, we use their 'tag' property
            self.g.add_node(e, label=e.tag)
            if hasattr(e, 'tmp') and e.tmp:
                temp = "'t%s'" % e.tmp
                # add a node representing that temp
                self.g.add_node(temp)
                self.g.add_edge(e, temp)

            elif hasattr(e, 'offset') and e.offset:
                reg = "'reg%s'" % e.offset
                # add a node representing that register
                self.g.add_node(reg)
                self.g.add_edge(e, reg)

    def to_dot(self, path):
        # Caution: will segfault with pypy for whatever reason
        write_dot(self.g, path)

