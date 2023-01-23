/*
balanced binary search tree: AVL tree
BF = hL - hR
BL: balance factor;
hL: height of left subtree;
hR: ;;;
*/

#include <iostream>

#ifndef __AVLTree__
#define __AVLTree__

#define MAX(x, y) (x>y?x:y)

using namespace std;

class AVLTree {

private:

	struct Node {
		int key;
		Node* left;
		Node* right;
	};

	struct KeyAndNode {
		Node* node;
		int key;
	};

	// single rotation
	Node* LL_rotate(Node* parent) {
		Node* child = parent->left;
		parent->left = child->right;
		child->right = parent;
		return child;
	}

	Node* RR_rotate(Node* parent) {
		Node* child = parent->right;
		parent->right = child->left;
		child->left = parent;
		return child;
	}

	// double rotation
	Node* LR_rotate(Node* parent) {
		Node* child = parent->left;
		parent->left = RR_rotate(child);
		return LL_rotate(parent);
	}

	Node* RL_rotate(Node* parent) {
		Node* child = parent->right;
		parent->right = LL_rotate(child);
		return RR_rotate(parent);
	}

	// find height, BF
	int getHeight(Node* p) {
		int height = 0;
		if (p) {
			height = MAX(getHeight(p->left), getHeight(p->right)) + 1;
		}
		return height;
	}

	int getBF(Node* p) {
		if (!p) return 0;
		return getHeight(p->left) - getHeight(p->right);
	}

	// rebalancing
	void rebalance(Node* &p) {
		int BF = getBF(p);
		if (BF > 1) {
			if (getBF(p->left) > 0) { p = LL_rotate(p); }
			else { p = LR_rotate(p); }
		}
		else if (BF < -1) {
			if (getBF(p->right) > 0) { p = RL_rotate(p); }
			else { p = RR_rotate(p); }
		}
	}

public:

	Node* root;

	AVLTree(int key) {
		root = new Node{ key, NULL, NULL };
	}
	
	void inorder(Node* p) {
		if (p) {
			inorder(p->left);
			cout << p->key << " ";
			inorder(p->right);
		}
	}

	Node* search(int x) {
		Node* temp = root;
		while (temp) {
			if (x < temp->key) { temp = temp->left; }
			else if (x > temp->key) { temp = temp->right; }
			else { return temp; }
		}
		return NULL;
	}

	Node* insert(int x, Node*& p) {
		if (!p) {
			Node* newNode = new Node{ x, NULL, NULL };
			return newNode;
		}
		else if (x < p->key) {
			p->left = insert(x, p->left);
			rebalance(p);
			return p;
		}
		else if (x > p->key) {
			p->right = insert(x, p->right);
			rebalance(p);
			return p;
		}
		else { return NULL; }
	}

	KeyAndNode removeSucc(Node*& succ) {
		if (!(succ->right)) {
			Node* temp = succ->left;
			int tempKey = succ->key;
			delete succ;
			return { temp, tempKey };
		}
		else {
			KeyAndNode temp = removeSucc(succ->right);
			succ->right = temp.node;
			rebalance(succ);
			return { succ, temp.key };
		}
	}

	Node* remove(int x, Node*& p) {
		if (!p) { return NULL; }
		else if (x < p->key) {
			p->left = remove(x, p->left);
			rebalance(p);
			return p;
		}
		else if (x > p->key) {
			p->right = remove(x, p->right);
			rebalance(p);
			return p;
		}
		else {
			int child_num = int(p->left != NULL) + int(p->right != NULL);

			// 0 child
			if (child_num == 0) {
				delete p;
				p = NULL;
				return p;
			}

			// 1 child
			if (child_num == 1) {
				Node* child = NULL;
				if (p->left) { child = p->left; }
				else { child = p->right; }

				delete p;
				p = child;
				return p;
			}

			// 2 child
			if (child_num == 2) {
				KeyAndNode tempKey = removeSucc(p->left);
				p->key = tempKey.key;
				p->left = tempKey.node;
				return p;
			}
		}
	}

};


#endif // !__AVLTree__
