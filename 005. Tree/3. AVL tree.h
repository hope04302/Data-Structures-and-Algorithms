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

	Node* root;

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
	Node* rebalance(Node* p) {
		int BF = getBF(p);
		if (BF > 1) {
			if (getBF(p->left) > 0) { p = LL_rotate(p); }
			else { p = LR_rotate(p); }
		}
		else {
			if (getBF(p->right) > 0) { p = RL_rotate(p); }
			else { p = RR_rotate(p); }
		}
		return p;
	}

public:


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


};


#endif // !__AVLTree__
