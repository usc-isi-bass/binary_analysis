import angr 
import pyvex


def node_from_cfg(filename):
    proj = angr.Project(filename, auto_load_libs=False);
    try:
        cfg = proj.analyses.CFG()
    except:
        return    

    main = cfg.kb.functions["main"]
    node = cfg.get_all_nodes(main.addr)[0]

    processed_nodes = []
    nodes_to_process = [node]
    nodes_to_process_addr = set([node.addr])
    while nodes_to_process:
        node = nodes_to_process[0]
        # bookkeeping
        nodes_to_process = nodes_to_process[1:]
        nodes_to_process_addr.remove(node.addr)
        processed_nodes.append(node.addr)

        if node.block is not None:
            yield node, proj

        successors = cfg.get_all_successors(node)
        for s in successors:
            # if the successing node was not visited already or is not 
            # scheduled for a visit, schedule it
            if (s.addr not in processed_nodes) and (s.addr not in nodes_to_process_addr):
                nodes_to_process.append(s)
                nodes_to_process_addr.add(s.addr)


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
