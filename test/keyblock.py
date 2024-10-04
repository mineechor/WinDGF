import idaapi
import idautils
import idc
import ida_ida
import networkx as nx
import matplotlib.pyplot as plt
# addr = 0x1000142A
# addr2 = 0x100726F8
# funcname = get_func_name(addr2)
# print(funcname)
# addr3 = get_name_ea(0,funcname)
# cross_refs = CodeRefsTo(addr,0)
# for ref in cross_refs:
#     print("%08x"%ref)
# cross_refs2 = CodeRefsTo(addr3,0)
# for ref in cross_refs2:
#     print("%08x"%ref)
#     print(get_func_name(ref))
call_chain = {}
call_function = {}
bbweight = {}
bblock = {}
maxweight = 0
# funcweight = []
def jcall(addr,max_iter,level):
    callee_func_name = get_func_name(addr)
    fun_addr = get_name_ea(0,callee_func_name)
    cross_refs = CodeRefsTo(fun_addr,0)
    if cross_refs is None or max_iter==0:
        return
    for ref in cross_refs:
        temp = []
        # temp.append(hex(ref))
        refaddr = ref
        # print(type(ref))
        caller_func_name = get_func_name(ref)
        caller_func_addr = get_name_ea(0,caller_func_name)
        # temp.append(caller_func_name)
        # temp.append(hex(fun_addr))
        # temp.append(callee_func_name)
        # temp.append(level+1)
        if caller_func_addr in call_chain:
            if refaddr in call_chain[caller_func_addr]:
                if level+1<call_chain[caller_func_addr][refaddr][2]:
                    temp.append(fun_addr)
                    temp.append(callee_func_name)
                    temp.append(level+1)
                    call_chain[caller_func_addr][refaddr] = temp
            else:
                temp.append(fun_addr)
                temp.append(callee_func_name)
                temp.append(level+1)
                call_chain[caller_func_addr][refaddr] = temp
        else:
            temp.append(fun_addr)
            temp.append(callee_func_name)
            temp.append(level+1)
            call_chain[caller_func_addr] = {refaddr:temp}
        # call_chain[caller_func_name][adrr] = temp
        # if caller_func_name in call_function:
        #     if level+1<call_function[caller_func_name]:
        #         call_function[caller_func_name] = level+1
        # else:
        #     call_function[caller_func_name] = level+1
        # temp.append(callee_func_name)
        # # call_chain.append(temp)
        # call_chain.append(tuple(temp))
        jcall(ref,max_iter-1,level+1)
def calculate_bb_weight(funcaddr,value):

#     addr = int(relation[0],16)
#     # print(relation[0])
    func_addr = funcaddr
    # print(func_addr)
    nx_graph = nx.DiGraph()
    function = idaapi.get_func(func_addr)
    
    tempdict = {}
#     func_addr = function.start_ea
    cfg = idaapi.FlowChart(function)
    for block in cfg:
        bbweight[block.start_ea] = [block.end_ea]
        if len(value)!= len(tempdict):
            for key in value:
                if key<=block.end_ea and key>=block.start_ea:
                    tempdict[block.start_ea] = value[key][2]
        # if addr>=block.start_ea and addr<= block.end_ea:
        #     tar = block.start_ea
        nx_graph.add_node(block.start_ea)
        for pred in block.preds():
            nx_graph.add_edge(pred.start_ea, block.start_ea)
        for succ in block.succs():
            nx_graph.add_edge(block.start_ea, succ.start_ea)
    # print(tempdict)
    for node in nx_graph.nodes():
        # print(hex(node))
        for key in tempdict:
            if nx.has_path(nx_graph,node,key):
                bblock[node] = bbweight[node]
                # dis = nx.dijkstra_path_length(G=nx_graph, source=node, target=key)+tempdict[key]
                # if bbweight[node][1]!=-1: 
                #     if dis<bbweight[node][1]:
                #         bbweight[node][1] = dis
                # else:
                #     bbweight[node][1] = dis
def key_func_weight(addr):
    nx_graph = nx.DiGraph()
    function = idaapi.get_func(addr)
    func_addr = function.start_ea
    cfg = idaapi.FlowChart(function)
    for block in cfg:
        bbweight[block.start_ea] = [block.end_ea]
        if addr>=block.start_ea and addr<= block.end_ea:
            tar = block.start_ea
        nx_graph.add_node(block.start_ea)
        for pred in block.preds():
            nx_graph.add_edge(pred.start_ea, block.start_ea)
        for succ in block.succs():
            nx_graph.add_edge(block.start_ea, succ.start_ea)
    for node in nx_graph.nodes():
        if nx.has_path(nx_graph,node,tar):
            bblock[node] = bbweight[node]
            # dis = nx.dijkstra_path_length(G=nx_graph, source=node, target=tar)
            # bbweight[node][1] = dis
def all_bb_weight(call_chain):
    for key in call_chain:
        # print(hex(key))
        if key==0xffffffff:
            continue
        calculate_bb_weight(key,call_chain[key])
#     dis = nx.dijkstra_path_length(G=nx_graph, source=func_addr, target=tar)
#     temp = list(relation)
#     temp.append(dis)
#     funcweight.append(temp)


addr = 0x79C1DA
max_iter = 5
level = 0
jcall(addr,max_iter,0)
key_func_weight(addr)
# set_call_chain = list(set(call_chain))
# calculate_bb_weight(hex(0x1007268b),call_chain[hex(0x1007268b)])
# print(call_chain)
all_bb_weight(call_chain)
min_ea = ida_ida.inf_get_min_ea()
min_ea = 0x400000
# print(hex(min_ea))
# print(bbweight)
f = open("D:\\final\\2022\\angr\\angr\\cms\\test\\rle\\xnview3block.txt","w")
for key in bblock:
    # dist = bbweight[key][1]
    # if dist>maxweight:
    #     maxweight = dist
    # if dist!=-1:
    start = key-min_ea
    end = bblock[key][0]-min_ea
    f.write("%d "%start)
    f.write("%d\n"%end)
        # f.write("%d \n"%dist)
        # f.write("%s "%hex(start))
        # f.write("%s \n"%hex(end))
# f.write("%d 0 0\n"%maxweight)
f.close()   
# print(call_chain)
# print(call_chain)
# print(call_function)