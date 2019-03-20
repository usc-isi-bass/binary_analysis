import networkx as nx
from networkx.drawing.nx_agraph import write_dot
import logging
l=logging.getLogger("binai.ast")

class ASTException(Exception):
    pass

class ASTGraph(object):
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
        self.stmt=0
        self.regs={} # track registers in SSA form

        for s in list(block.vex.statements):
            self.stmt+=1
            s.pp()
            # Skip instruction marks
            if s.tag == 'Ist_IMark':
                self.imark+=1
                if instructions is not None and self.imark > instructions:
                    l.debug("Stopping here")
                    break
                continue
            
            if s.tag == 'Ist_AbiHint':
                # TODO: do what?
                continue

            if s.tag == 'Ist_Exit':
                self._handle_exit(s)
                continue

            self._handle_statement(s)

    def _handle_exit(self, s):
        self._add_node(s)
        self._to_nodes(s.guard)
        self._to_nodes(s.dst)
        self._add_directed_edge(s, s.guard)
        self._add_directed_edge(s, s.dst)

    def _handle_statement(self, s):
        """
        IR Statements produce side effects. They depend on IR expressions.
        I.e., they correspond to the left hand side of IR instrucitons, e.g.:
            t0 = GET:I64(offset=56)
        Here, a write tmp instruction to t0 in this example, which depends on a
        get expression.
        """

        # Left hand side
        self._to_nodes(s)
        self._add_directed_edge(s, s.data, is_dep=True)

        # Right hand side
        self._to_nodes(s.data)


    def _to_nodes(self, e):
        """
        Create nodes out of a statement or expression
        We'll create a node for each staetment and expression itself, and a node
        for the reg or temp involved.
        :param e": a pyvex IR expression
        """

        label = self._add_node(e)
        self._link_reg_tmp_deps(e, label)

        if hasattr(e, 'args'):
            deps = e.args

        elif hasattr(e, 'child_expressions'):
            deps = e.child_expressions

        if hasattr(e, 'expressions'):
            deps = e.expressions

        else:
            deps = []

        for dep in deps:
            self._to_nodes(dep)
            self._add_directed_edge(e, dep, is_dep=True)


    def _add_node(self, n):
        """
        Create a node for statement or expression
        """
        if hasattr(n, 'op'):
            label = n.op
        elif hasattr(n, 'tag'):
            label = n.tag
        else:
            label = n
        l.debug("Adding node %s with label %s" % (n, label))
        self.g.add_node(n, label=label)

        return label


    def _link_reg_tmp_deps(self, e, label):
        """
        Expose the link between a node and its register or temp dependencies
        """

        reg_write = 'Put' in label # If it is a reg write
        node = None

        # Handles temp names
        if hasattr(e, 'tmp') and e.tmp is not None:
            temp = "'t%s'" % e.tmp
            node = temp
            is_dep=False
            # add a node representing that temp

        # Special case (angr has a very annoying implementation of VEX
        # instructions)
        elif hasattr(e, 'addr') and e.addr is not None:
            if e.addr.tmp is not None:
                temp = "'t%s'" % e.addr.tmp
                node = temp
                is_dep=True
                # add a node representing that temp

        # Handles reg names (SSA)
        elif hasattr(e, 'offset') and e.offset is not None:
            if reg_write is True:
                instance = self._inc_reg_instance(e.offset)
            else:
                instance = self._get_reg_instance(e.offset)

            reg = "'reg%s_%d'" % (e.offset, instance)

            node = reg
            is_dep=False

        # Handles constants
        elif hasattr(e, 'con') and e.con is not None:
            node = hex(e.con.value)
            is_dep=True

        if node:
            self._add_node(node)
            self._add_directed_edge(e, node, is_dep=is_dep)


    def _add_directed_edge(self, n1, n2, is_dep=False):
        """
        Directed graph -- make the edges look right
        :param n1: node
        :param n2: node
        :param dep: whether the relation is a dependency (statements and ops)
        This has the effect of inverting the direction of the edge.
        """
        for n in [n1, n2]:
            if not n in self.g.node:
                raise ASTException("Node %s not in graph" % n)

        if is_dep is True or n1.tag in self.read_ops:
            self.g.add_edge(n2, n1)
            l.debug("Edge: %s->%s" % (n2, n1.tag))
        #elif n1.tag in self.write_ops:
        else:
            self.g.add_edge(n1, n2)
            l.debug("Edge: %s->%s" % (n1.tag, n2))

        #else:
            #l.warning("Unhandled operation %s" % n1.tag)


        #if is_dep is True:
        #    self.g.add_edge(dest, orig)
        #    l.debug("Edge: %s->%s" % (dest, orig))
        #else:
        #    self.g.add_edge(orig, dest)
        #    l.debug("Edge: %s->%s" % (orig, dest))


    def _get_reg_instance(self, offset):
        return self.regs[offset] if offset in self.regs.keys() else 0

    def _inc_reg_instance(self, offset):
        val = self._get_reg_instance(offset) + 1
        self.regs[offset] = val
        return val

    def to_dot(self, path):
        # Caution: will segfault with pypy for whatever reason
        write_dot(self.g, path)

