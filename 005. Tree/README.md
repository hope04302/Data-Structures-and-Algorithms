# Tree

Tree is one of non-linear data structure and "Hierarchical Data Structure". It includes "Nodes" and "Edges". 
We say relation of nodes like "parent", "child", "sibling", "ancestor", etc. 
Group of trees is spoked as "Forest". 

- elements of tree
	- degree(����)
	- node(���), edge(����) > terminal(=Leaf) <-> internal(=non-terminal)
	- height
	- level
	- subtree

- types of tree(degree & level)
	- binary tree(���� Ʈ��)
	- full binary tree(��ȭ ���� Ʈ��)
	- complete binary tree
	- skewed binary tree

- types of tree(how to made)
	- ordered tree(made by array or vector<type>)
	- linked tree(made by struct & pointer)

## Algorithms of Tree

We can make "Binary Search Tree" and "Heap" to use tree structure. 

- traversal
	- preorder traversal
	- inorder traversal
	- postorder traversal

- binary search tree
	- keys of left tree < key < keys of right tree
	- AVL Tree: more efficient
		- LL & RR rotate
		- LR : RR -> LL
		- RL : LL -> RR

- heap(often made by ordered tree)
	- keys of children < key of parent