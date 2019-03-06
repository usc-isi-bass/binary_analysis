import networkx as nx
from networkx.drawing.nx_agraph import write_dot
import logging
l=logging.getLogger("binai.ast")

class AST(object):
    """
    Builds an Abstract Syntax Tree representing VEX operations.
    """

    read_ops = ['Ist_RdTmp', 'Iex_RdTmp', 'Iex_Get']
    write_ops = ['Ist_WrTmp', 'Iex_WrTmp', 'Iex_Put', 'Ist_Put', 'Iex_Store', 'Ist_Store']

    def __init__(self, block, instructions=None):
        """
        :param block: an angr block (i.e., factory.block).
        :param instructions: how many instructions to analyze
        """

        self.g = nx.DiGraph()

        self.imark=0
        for s in list(block.vex.statements):
            s.pp()
            # Skip instruction marks
            if s.tag == 'Ist_IMark':
                self.imark+=1
                if instructions is not None and self.imark > instructions:
                    l.debug("Stopping here")
                    break
                continue

            self._handle_statement(s)

    def _add_node(self, n):
        label = n.tag
        if hasattr(n, 'op'):
            label = n.op
        self.g.add_node(n, label=label)
        self._link_reg_tmp_deps(n)

    def _handle_subexpr(self, e):
        """
        For IR expressions reading/writing to regs or temps.
        We'll create a node for the expression itself, and a node for the reg or
        temp involved.
        :param e": a pyvex IR expression
        """

        self._add_node(e)

        if hasattr(e, 'args'):
            deps = e.args

        elif hasattr(e, 'child_expressions'):
            deps = e.child_expressions

        if hasattr(e, 'expressions'):
            deps = e.expressions

        else:
            deps = []


        for dep in deps:
            self._add_directed_edge(e, dep, is_dep=True) # not useful
            self._handle_subexpr(dep)


    def _handle_statement(self, s):
        """
        IR Statements produce side effects and depend on IR expressions.
        I.e., they correspond to the left hand side of IR instrucitons, e.g.:
            t0 = GET:I64(offset=56)
        Here, a write tmp instruction to t0 in this example, which depends on a
        get expression.
        """

        # Left hand side
        self._add_node(s)
        self._add_node(s.data)
        #self._link_reg_deps(s)
        # Right hand side
        self._add_directed_edge(s, s.data, is_dep=True)
        self._handle_subexpr(s.data)

    def _link_reg_tmp_deps(self, e):
        """
        Expose the link between a node and its register or temp dependencies
        """
        if hasattr(e, 'tmp') and e.tmp is not None:
            temp = "'t%s'" % e.tmp
            # add a node representing that temp
            self.g.add_node(temp)
            self._add_directed_edge(e, temp)

        elif hasattr(e, 'offset') and e.offset is not None:
            reg = "'reg%s'" % e.offset
            # add a node representing that register
            self.g.add_node(reg)
            self._add_directed_edge(e, reg)

    def _add_directed_edge(self, n1, n2, is_dep=False):
        """
        Directed graph -- make the edges look right
        :param n1: node
        :param n2: node
        :param dep: whether the relation is a dependency (statements and ops)
        This has the effect of inverting the direction of the edge.
        """

        if is_dep is True or n1.tag in self.read_ops:
            self.g.add_edge(n2, n1)
            l.debug("Edge: %s->%s" % (n2, n1))
        elif n1.tag in self.write_ops:
            self.g.add_edge(n1, n2)
            l.debug("Edge: %s->%s" % (n1, n2))
        else:
            raise Exception("Unhandled operation %s" % n1.tag)

    def to_dot(self, path):
        # Caution: will segfault with pypy for whatever reason
        write_dot(self.g, path)

