# depth first search algorithm : iterative
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


# iterative dfs
def dfs(G, v):
    stack = [v]
    marked[v] = True
    while stack:
        # pop the last element
        v = stack.pop()
        print(v)
        # iterate through the neighbors
        for w in range(len(G)):
            if G[v][w] == 1 and not marked[w]:
                # add not visited neighbors to the stack
                stack.append(w)
                marked[w] = True


dfs(A, 0)

# To Do
# - Cycle detection
# - Topological sort
# - Strongly connected components
# - The Shortest path
# - Minimum spanning tree
# - Minimum cost spanning tree
