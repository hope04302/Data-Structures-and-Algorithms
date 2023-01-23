# Graph

Graph is one of non-linear data structure. It includes Vertexes and Edges.
It expressed like "{A, B, C}".

- seperate by type of edge
	- undirected eraph	| (A, B)
	- directed eraph(digraph)	| <A, B>: A -> B
	- weight eraph

- seperate by form
	- complete graph
	- subgraph

- elements of graph
	- adjacent(����) ... incident(�μ�)
	- degree(����) : In-degree(���� ����) & Out-degree(���� ����)
	- path length(��� ����)
	- all different nodes -> simple path
	- start node == end node -> cycle (digraph -> DAG; directed acyclic graph)
	- if path exists -> "connected"
	- connected graph ... disconnected graph

- how to make graphs?
	- adjacent matrix
	- adjacent list

## Graph Traversal

Graph Traversal is also called as "Graph Search".

- DFS: depth first search(���� �켱 Ž��)
- BFS: breadth first search(�ʺ� �켱 Ž��)

## Minimum Cost Spanning Tree

"Tree" in graph-part means graph without cycles.
"Spanning Tree" is the tree which has (n) vertaxes and (n - 1) edges.
Traversal path also includes them.

- traversal path
	- depth first spanning tree
	- breadth second spanning tree

Minimum cost spanning tree is one of "Spanning Tree", which has the lowest sum of weights.
We can find it to use some algorithms.

- Kruskal algorithm(type 1, type 2)
- Prime algorithm

## Shortest Path

"Shortest Path" is the path which has lowest sum of weights in "Network(= weight graph without spanning tree)".
We can find it to use some algorithms.

- Dijkstra algorithm (one to all shortest path)
- Floyd algorithm (all to all shortest path)