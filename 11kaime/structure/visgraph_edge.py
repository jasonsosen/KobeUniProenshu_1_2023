import networkx as nx
import matplotlib.pyplot as plt
import sys 

# テキストファイルからグラフ情報を読み取る
def read_graph_from_file(file_path):
    graph = nx.Graph()
    with open(file_path, 'r') as file:
        for line in file:
            source, destination = line.strip().split()
            graph.add_edge(int(source), int(destination))
    return graph

args = sys.argv
gakuban = args[1] #gakuban
figname = 'kadai11_2'
G = read_graph_from_file(figname+'.txt')
pos = nx.spring_layout(G, seed=42)
nx.draw_networkx(G, pos)
nx.draw_networkx_nodes(G, pos, node_size=500, node_color='lightblue') 
plt.axis('off')  
plt.title(str(gakuban))
plt.savefig(figname+'_'+str(gakuban)+'.png')
plt.show()