import networkx as nx
from networkx.drawing.nx_agraph import write_dot
import logging
import re
import sys
import random
import numpy as np

l=logging.getLogger("binai.ast")
l.setLevel('CRITICAL')
logging.getLogger('angr.analyses').setLevel('CRITICAL')
logging.getLogger('cle.loader').setLevel('CRITICAL')
logging.getLogger('cle.backends').setLevel('CRITICAL')
logging.getLogger('angr.state_plugins').setLevel('CRITICAL')

class ASTException(Exception):
    pass


def isNaN(num):
    return num != num

class ASTGraph(object):
    """
    Builds an Abstract Syntax Tree repressizeenting VEX operations.
    """

    read_ops = ['Ist_RdTmp', 'Iex_RdTmp', 'Iex_Get']
    write_ops = ['Ist_WrTmp', 'Iex_WrTmp', 'Iex_Put', 'Ist_Put']
    store_ops = ['Iex_Store', 'Ist_Store', 'Iex_Load', 'Ist_Load']
    
    def __init__(self, block, i, instructions=None):
        """
        :param block: an angr block (i.e., factory.block).
        :param instructions: how many instructions to analyze
        """

        self.g=nx.DiGraph()

        self.source=None
        self.sync=None
        self.imark=0
        self.stmt=0
        self.temps={}
        self.block_idx=i
        self.regs={} # track registers in SSA form

        for s in list(block.vex.statements):
            self.stmt+=1

            # Skip instruction marks
            if s.tag == 'Ist_IMark':
                self.imark+=1
                if instructions is not None and self.imark > instructions:
                    break
                continue

            if s.tag == 'Ist_AbiHint':
                continue

            if s.tag == 'Ist_Exit':
                self._handle_exit(s)
                continue
            self._handle_statement(s)
        if not nx.classes.function.is_empty(self.g):
            self._add_source_and_sync()
    
    
    def _add_source_and_sync(self):
        self.source = 'Source_{}'.format(self.block_idx)
        self.sync = 'Sink_{}'.format(self.block_idx)
        
        self.g.add_node(self.source, label=self.source)
        self.g.add_node(self.sync, label=self.sync)
        
        in_degrees = self.g.in_degree(self.g.nodes)
        out_degrees = self.g.out_degree(self.g.nodes)
        
        for n, d in in_degrees:
            if d == 0 and (n not in [self.source, self.sync]):
                self.g.add_edge(self.source, n)
        for n, d in out_degrees:
            if d == 0 and (n not in [self.source, self.sync]):
                self.g.add_edge(n, self.sync)
        
        
    def _handle_exit(self, s):
        node = "%s_%s" % (self.block_idx, str(id(s)))
        self.g.add_node(node, label=str(s.jumpkind))
        
        tmp = "%s_%s" % (self.block_idx, s.guard)
        if tmp not in self.g.nodes:
            self.g.add_node(tmp, label=str(s.guard))
        
        dst_node = "%s_%s" % (self.block_idx, id(s.dst))
        if dst_node not in self.g.nodes:
            self.g.add_node(dst_node, label=str(s.dst))
        
        self._add_directed_edge(node, tmp, is_dep=True)
        self._add_directed_edge(node, dst_node, is_dep=True)
        

    def _handle_statement(self, s):
        """
        IR Statements produce side effects. They depend on IR expressions.
        I.e., they correspond to the left hand side of IR instrucitons, e.g.:
            t0 = GET:I64(offset=56)
        Here, a write tmp instruction to t0 in this example, which depends on a
        get expression.
        """
        self._to_nodes(s)


    def _to_nodes(self, e, sync=None):
        """
        Create nodes out of a statement or expression
        We'll create a node for each staetment and expression itself, and a node
        for the reg or temp involved.
        :param e": a pyvex IR expression
        """
        label = self._get_label(e)
        node_id = "%s_%d" % (self.block_idx, id(e))
        self.g.add_node(node_id, label=label)

        if label not in self.store_ops:
            node, is_dep_of_e = self._get_tmp_deps(e, label) 
        else:
            node = None
            
        if node is not None:
            self._add_directed_edge(node, node_id, is_dep_of_e)
            if is_dep_of_e:
                if sync:
                    self._add_directed_edge(node, sync, is_dep=False)
                sync = node_id
            else:
                if sync:
                    self._add_directed_edge(node_id, sync, is_dep=False)
                sync = node
        else:
            if sync:
                self._add_directed_edge(node_id, sync, is_dep=False)
            sync = node_id
            
        if hasattr(e, 'args'):
            deps = e.args
            for dep in deps:
                self._to_nodes(dep, sync=sync)
        elif hasattr(e, 'child_expressions'):
            deps = e.child_expressions
            for dep in deps:
                self._to_nodes(dep, sync=sync)

        if hasattr(e, 'expressions'):
            deps = e.expressions
            for dep in deps:
                self._to_nodes(dep, sync=sync)
                if hasattr(dep, 'op'):
                    break

    def _get_label(self, n):
        """
        Create a node for statement or expression
        """
        if hasattr(n, 'op'):
            node_label = n.op
        elif hasattr(n, 'tag'):
            node_label = n.tag
        else:
            node_label = n
            print (node_label)
        if node_label:
            assert isinstance(node_label, str), node_label
        l.debug("Adding node %s with label %s" % (n, node_label))
        return node_label


    def _get_tmp_deps(self, e, label):
        """
        Expose the link between a node and its register or temp dependencies
        """

        reg_write = 'Put' in label # If it is a reg write
        node = None
        is_dep = False
        
        # Handles temp names
        if hasattr(e, 'tmp') and e.tmp is not None:
            node_label = "t%s" % e.tmp
            node = "%s_%s" % (self.block_idx, node_label)
            
            if node not in self.g.nodes:
                self.g.add_node(node, label=node_label)
            if label in self.write_ops:
                is_dep = True
            else:
                is_dep = False

        # Special case
        elif hasattr(e, 'addr') and e.addr is not None:
            # Here, the addr can be a tmp or a pyvex const
            if e.addr.tag == 'Iex_RdTmp':
                node_label = "t%s" % e.addr.tmp
                node = "%d_%s" % (self.block_idx, node_label)
                if label != 'Iex_Load':
                    is_dep=True
                else:
                    is_dep=False
            elif e.addr.tag == 'Iex_Const':
                node_label = str(hex(e.addr.con.value))
                node = "%d_%s" % (self.block_idx, node_label)
                is_dep=True
            elif e.addr.tag == 'Iex_Store':
                node_label = str(hex(e.addr.con.value))
                node = "%d_%s" % (self.block_idx, node_label)
                is_dep=True
            
            if node not in self.g.nodes:
                self.g.add_node(node, label=node_label)

        # Handles reg names (SSA)
        elif hasattr(e, 'offset') and e.offset is not None:
            if reg_write is True:
                instance = self._inc_reg_instance(e.offset)
                is_dep=True
            else:
                instance = self._get_reg_instance(e.offset)
                is_dep=False

            reg = "reg%s_%d" % (e.offset, instance)
            node = "%s_%s" % (self.block_idx, reg)
            if node not in self.g.nodes:
                self.g.add_node(node, label=reg)

        # Handles constants
        elif hasattr(e, 'con') and e.con is not None:
            v = e.con.value
            if isinstance(v, float):
                if not isNaN(v):
                    assert v.is_integer(), "The value of the constant is not an integer: {}! ".format(v)
                    v = int(v)
            if isNaN(v):
                node_label = "NaN"
            else:
                node_label = str(hex(v))
            node = "%d_%s" % (self.block_idx, node_label)
            is_dep=False
            
            if node not in self.g.nodes:
                self.g.add_node(node, label=node_label)
        if node:
            assert isinstance(node, str), node
        return node, is_dep


    def _add_directed_edge(self, n1, n2, is_dep=False):
        """
        Directed graph -- make the edges look right
        :param n1: node
        :param n2: node
        :param dep: whether the relation is a dependency (statements and ops)
        This has the effect of inverting the direction of the edge.
        """
        if n1 == n2:
            return
        for n in [n1, n2]:
            if not n in self.g.nodes:
                raise ASTException("Node %s not in graph" % n)

        if is_dep is True:
            self.g.add_edge(n2, n1)
            l.debug("Edge: %s->%s" % (self.g.nodes[n2], self.g.nodes[n1]))
        else:
            self.g.add_edge(n1, n2)
            l.debug("Edge: %s->%s" % (self.g.nodes[n1], self.g.nodes[n2]))

            
    def _get_reg_instance(self, offset):
        return self.regs[offset] if offset in self.regs.keys() else 0

    
    def _inc_reg_instance(self, offset):
        val = self._get_reg_instance(offset) + 1
        self.regs[offset] = val
        return val

    
    def to_dot(self, path):
        # Caution: will segfault with pypy for whatever reason
        write_dot(self.g, path)


def remove_extra_load_edge(g):
    tmp_pattern = re.compile("t[0-9]+")
    load = ['Ist_Load', 'Iex_Load']
    write_tmp = ['Ist_WrTmp', 'Iex_WrTmp']
    for node in g.nodes:
        successors = list(g.successors(node)) 
        labels = nx.get_node_attributes(g, 'label')
        # if has both write_tmp and load:
        # if write_tmp is also the child of load, 
        # remove the edge between current node and write_tmp
        if len(successors) <= 1:
            continue
        write_child = None
        load_child = None
        for s in successors:
            if labels[s] in load:
                load_child = s
            elif labels[s] in write_tmp:
                write_child = s
        if write_child and load_child:
            load_child_successors = g.successors(load_child)
            if write_child in load_child_successors:
                g.remove_edge(node, write_child)

                
def old_remove_extra_load_edge(g):
    tmp_pattern = re.compile("t[0-9]+")
    load = ['Ist_Load', 'Iex_Load']
    write_tmp = ['Ist_WrTmp', 'Iex_WrTmp']
    for node in g.nodes:
        successors = list(g.successors(node)) 
        labels = nx.get_node_attributes(g, 'label')
        print ("Considering node: ", node, len(successors), successors)
        if len(successors) == 2:
            if (labels[successors[0]] in load) and (labels[successors[1]] in write_tmp):
                print ("removing edge from {} to {}".format(labels[node], labels[successors[1]]))
                g.remove_edge(node, successors[1])
            elif (labels[successors[1]] in load) and (labels[successors[0]] in write_tmp):
                g.remove_edge(node, successors[0])
                print ("removing edge from {} to {}".format(labels[node], labels[successors[0]]))
                               
                
def old_contract_graph(g):
    tmp_pattern = re.compile("'t[0-9]+'")
    write_tmp = ['Ist_WrTmp', 'Iex_WrTmp']
    read_tmp = ['Ist_RdTmp', 'Iex_RdTmp']
    for node in g.nodes:
        successors = list(g.successors(node)) 
        for i in successors:
            
            labels = nx.get_node_attributes(g, 'label')
            if labels[i] not in write_tmp:
                continue
            
            two_successors = list(g.successors(i))
            if len(two_successors) != 1 or (not tmp_pattern.match(labels[two_successors[0]])):
                continue
            
            ii = two_successors[0]
            three_successors = list(g.successors(two_successors[0]))
            
            if len(three_successors) != 1 or (labels[three_successors[0]] not in read_tmp):
                continue
            
            iii = three_successors[0]
            g.remove_edge(node, i)
            four_successors = list(g.successors(iii))
            for iiii in four_successors:
                g.add_edge(node, iiii)
                g.remove_edge(iii, iiii)
    
    to_remove = []
    for c in nx.weakly_connected_components(g):
        in_degrees = g.in_degree(c)
        tmp_expr = False
        for n, d in in_degrees:
            if d == 0 and nx.get_node_attributes(g, 'label')[n] in write_tmp:
                tmp_expr = True
                break
        if tmp_expr:
            for n in c:
                to_remove.append(n)
    for n in to_remove:
        g.remove_node(n)
        
        
def contract_graph(g, i):
    tmp_pattern = re.compile("t[0-9]+")
    write_tmp = ['Ist_WrTmp', 'Iex_WrTmp']
    read_tmp = ['Ist_RdTmp', 'Iex_RdTmp']

    node_contracted = True
    while node_contracted:
        node_contracted = False
        for node, label_dict in g.nodes(data=True):
            label = label_dict['label']
            if tmp_pattern.match(label):
                parents = list(g.predecessors(node))
                children = list(g.successors(node))
                # If there are exactly one parent and child, i.e. it is a chain
                if len(parents) != 1 or len(children) != 1:
                    continue
                parent_label = g.nodes.data()[parents[0]]['label']
                child_label = g.nodes.data()[children[0]]['label']
                if parent_label not in write_tmp or child_label not in read_tmp:
                    continue
                node_contracted = True
                parent = parents[0]
                child = children[0]
                g = nx.contracted_nodes(g, node, parent, self_loops=False)
                g = nx.contracted_nodes(g, node, child, self_loops=False)
                all_parents = list(g.predecessors(node))
                all_children = list(g.successors(node))
                for pp in all_parents:
                    for cc in all_children:
                        g.add_edge(pp, cc)
                g.remove_node(node)
                check_childless_nodes(g)
                check_parentless_nodes(g, i)
                break
    return g
            
def contract_iex_const(g):
    const = 'Iex_Const'
    for node in g.nodes:
        successors = list(g.successors(node)) 
        for i in successors:
            
            labels = nx.get_node_attributes(g, 'label')
            if labels[i] != const:
                continue
                
            two_successors = list(g.successors(i))
            g.remove_edge(node, i)
            for ii in two_successors:
                g.add_edge(node, ii)
                g.remove_edge(i, ii)
    
    to_remove = []
    for c in nx.weakly_connected_components(g):
        if len(c) > 1:
            continue
        for n in c:
            if nx.get_node_attributes(g, 'label')[n] == const:
                to_remove.append(n)
    for n in to_remove:
        g.remove_node(n)
            

def is_valid_graph(g):
    # check the graph is DAG
    if not nx.is_directed_acyclic_graph(g):
        raise Exception('Graph is not a directed acyclic graph')
    
    # check there is only one connected component
    if nx.number_weakly_connected_components(g) > 1:
        raise Exception('More than one connected component: {}'.format(nx.number_weakly_connected_components(g)))
        
        
def check_childless_nodes(graph):
    for node in graph.nodes():
        children = list(graph.successors(node))
        if len(children) == 0: 
            assert "Sink" in node, "Node {}, {} has no children".format(node, graph.nodes.data()[node]['label'])
    
def check_parentless_nodes(graph, i=0):
    for node in graph.nodes():
        parents = list(graph.predecessors(node))
        if len(parents) == 0: 
            if i < 0:
                assert "Source" in node, "Node {}, {} has no parents (no i was specified)".format(node, graph.nodes.data()[node]['label'])
            else:
                assert node=="Source_{}".format(i), "Node {}, {} has no parents, i={}".format(node,graph.nodes.data()[node]['label'],i)

def check_no_nodes_repeat(new_tree, all_trees):
    new_tree_nodes = list(new_tree.nodes())
    for i, t in all_trees:
        assert len(np.intersect1d(list(t.nodes()), new_tree_nodes)) == 0, i            

        
def old_create_graph_from_cfg(cfg):
    graph = nx.DiGraph()
    trees = []
    for i, n in enumerate(cfg.graph.nodes()):
        if n.block is not None:
            tree = ASTGraph(n.block, i).g
            is_valid_graph(tree)

            remove_extra_load_edge(tree)
            contract_graph(tree)
            contract_iex_const(tree)

            is_valid_graph(tree)

            trees.append(tree)
            graph = nx.algorithms.operators.binary.compose(graph, tree)
    adj_m = nx.adj_matrix(cfg.graph)
    idxs = adj_m.nonzero()
    for i, j in zip(*idxs):
        source_i = 'Sink_{}'.format(i)
        sync_j = 'Source_{}'.format(j)

        graph.add_edge(source_i, sync_j)
    #print ("{} nodes and {} edges in graph.".format(len(graph.nodes()), len(graph.edges())))
    return graph


def create_graph_from_cfg(cfg):
    graph = nx.DiGraph()
    trees = []
    for i, n in enumerate(cfg.graph.nodes()):
        if n.block is not None:
            tree = ASTGraph(n.block, i).g
            is_valid_graph(tree)
            remove_extra_load_edge(tree)
            tree = contract_graph(tree, i)
            contract_iex_const(tree)

            is_valid_graph(tree)
            check_no_nodes_repeat(tree, trees)
            check_parentless_nodes(tree, i)
            check_childless_nodes(tree)
            trees.append((i, tree))
            graph = nx.algorithms.operators.binary.compose(graph, tree)

    for i, n in enumerate(cfg.graph.nodes()):
        if n.block is None:
            graph.add_node('Source_{}'.format(i))
            graph.add_node('Sink_{}'.format(i))
            graph.add_edge('Source_{}'.format(i), 'Sink_{}'.format(i))
    adj_m = nx.adj_matrix(cfg.graph)
    idxs = adj_m.nonzero()
    for i, j in zip(*idxs):
        source_i = 'Sink_{}'.format(i)
        sink_j = 'Source_{}'.format(j)

        graph.add_edge(source_i, sink_j)
    for i, t in trees:
        if t.number_of_nodes() == 0:
            graph.add_edge("Source_{}".format(i), "Sink_{}".format(i)) 

    check_parentless_nodes(graph, i=-1)
    check_childless_nodes(graph)
    assert nx.number_weakly_connected_components(graph) == 1, "The graph is not connected"
    return graph
