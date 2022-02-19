# depth first search algorithm : recursive
import numpy as np

A = [
    # 0 1  2  3  4
    [0, 1, 1, 1, 0],  # 0
    [1, 0, 0, 1, 0],  # 1
    [1, 0, 0, 0, 0],  # 2
    [1, 1, 0, 0, 1],  # 3
    [0, 0, 0, 1, 0]  # 4
]
A = np.array(A)

print(A)

marked = [False] * len(A)

print(marked)


def dfs(G, v):
    # marking visited node
    marked[v] = True
    print(v)
    for i in range(len(G)):
        if G[v][i] == 1 and not marked[i]:
            dfs(G, i)

# adjacency matrix and starting node


dfs(A, 0)
