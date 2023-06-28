# visgraph_matrix.py
import numpy as np
import networkx as nx
import matplotlib.pyplot as plt
import sys 

args = sys.argv
gakuban = args[1] #gakuban
figname = 'kadai11_1'
# 隣接行列の読み込み
adjacency_matrix = np.loadtxt(figname+'.txt', dtype=int)

# グラフの作成
G = nx.Graph(adjacency_matrix)

# グラフの描画
pos = nx.spring_layout(G, seed=42)  
nx.draw_networkx_nodes(G, pos, node_size=500, node_color='lightblue') 
nx.draw_networkx_edges(G, pos)  # エッジの描画
nx.draw_networkx_labels(G, pos, font_size=10, font_color='black')  
plt.axis('off') 
plt.title(str(gakuban))  
plt.savefig(figname+'_'+str(gakuban)+'.png') 
plt.show() 