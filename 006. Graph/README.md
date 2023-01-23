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
	- adjacent(인접) ... incident(부속)
	- degree(차수) : In-degree(진입 차수) & Out-degree(진출 차수)
	- path length(경로 길이)
	- all different nodes -> simple path
	- start node == end node -> cycle (digraph -> DAG; directed acyclic graph)
	- if path exists -> "connected"
	- connected graph ... disconnected graph

## (Graph) Search

Graph Search is also called as "Graph Traversal".

- DFS: depth first search(깊이 우선 탐색)
- BFS: breadth first search(너비 우선 탐색)