import angr 
import pyvex

def node_from_cfg(filename):
    proj = angr.Project(filename, auto_load_libs=False);
    try:
        cfg = proj.analyses.CFG()
    except:
        return                    
    for i, n in enumerate(cfg.graph.nodes()):
        if n.block is not None:
            yield n, proj

def loadBinASTData(train_r=8, val_r=1, test_r=1):
    directories = os.walk('../bin/')
    next(directories)
    trees = []
    i = 0
    for directory in directories:
        print ('Processing dir: ', directory[0])
        i += 1
        if i == 5:
            break
        for file in directory[2]:
            filename = directory[0] + '/' + file
            all_trees = []
            for node, _ in node_from_cfg(filename):
                try:
                    graph = ASTGraph(node.block)
                except Exception as err:
                    print ('Unable to parse file {}'.format(filename))
                    print (err)
                    continue
                all_trees_in_graph = []
                for n, d in graph.g.in_degree():
                    if d == 0:
                        all_trees_in_graph.append(Tree(graph.g, n))
                if len(all_trees_in_graph) > 0:
                    all_trees.append(combineTrees(all_trees_in_graph))
            tree = combineTrees(all_trees)
            tree.label = int(directory[0].split('/')[2])
            trees.append(tree)          
    return trees

def ir_default_to_string(stmt):
    return stmt.__str__()


def ir_generalized_to_string(stmt):
    if isinstance(stmt, pyvex.IRStmt.IMark):
        return None
    if isinstance(stmt, pyvex.IRStmt.AbiHint):
        return None
    stmt_str = stmt.__str__()
    if isinstance(stmt, pyvex.IRStmt.WrTmp):
        stmt_str = "TMP={}".format(to_string(stmt.data))
    elif isinstance(stmt, pyvex.IRStmt.Store):
        stmt_str = "ST({})={}".format(
                to_string(stmt.addr), 
                to_string(stmt.data))
    elif isinstance(stmt, pyvex.IRStmt.PutI):
        stmt_str = "{}=OFFSET".format(to_string(stmt.data))
    elif isinstance(stmt, pyvex.IRStmt.Put):
        stmt_str = "PUT(OFFSET)={}".format(to_string(stmt.data))
    elif isinstance(stmt, pyvex.IRExpr.Const):
        stmt_str = "CONST"
    elif isinstance(stmt, pyvex.IRExpr.GetI):
        stmt_str = "GET(REG)"
    elif isinstance(stmt, pyvex.IRExpr.RdTmp):
        stmt_str = "READ(TMP)"
    elif isinstance(stmt, pyvex.IRExpr.Get):
        stmt_str = "GET(OFFSET)"
    elif isinstance(stmt, pyvex.IRExpr.Load):
        stmt_str = "LOAD(ADDR)"
    elif isinstance(stmt, pyvex.IRExpr.ITE):
        stmt_str = "ITE"
    elif isinstance(stmt, pyvex.IRExpr.Unop):
        stmt_str = "{}({})".format(
                stmt.op, 
                to_string(stmt.args[0]))
    elif isinstance(stmt, pyvex.IRExpr.Binop):
        stmt_str = "{}({}, {})".format(
                stmt.op, 
                to_string(stmt.args[0]), 
                to_string(stmt.args[1]))
    elif isinstance(stmt, pyvex.IRExpr.Triop):
        stmt_str = "{}({}, {}, {})".format(
                stmt.op, 
                to_string(stmt.args[0]),
                to_string(stmt.args[1]), 
                to_string(stmt.args[2]))
    elif isinstance(stmt, pyvex.IRExpr.Qop):
        stmt_str = "{}({}, {}, {}, {})".format(
                stmt.op, 
                to_string(stmt.args[0]), 
                to_string(stmt.args[1]), 
                to_string(stmt.args[2]), 
                to_string(stmt.args[3]))
    return stmt_str
