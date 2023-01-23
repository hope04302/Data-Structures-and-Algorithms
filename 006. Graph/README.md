# Graph

Graph is one of non-linear data structure. It includes Vertexes and Edges.
It expressed like "{A, B, C}".

- seperate by type of edge
	- undirected eraph			| (A, B)
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

## (Graph) Search

Graph Search is also called as "Graph Traversal".

- DFS: depth first search(���� �켱 Ž��)
- BFS: breadth first search(�ʺ� �켱 Ž��)