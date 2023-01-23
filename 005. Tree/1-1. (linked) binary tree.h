#include <iostream>
#include <cmath>

#ifndef __LinkedBinaryTree__
#define __LinkedBinaryTree__

using namespace std;

namespace tree {

	struct Node {
		char data;
		Node* left;
		Node* right;
		bool isThreadRight;
	};

	Node* appendNode(char data, Node* left, Node* right, bool isThreadRight) {
		Node* newNode = new Node{ data, left, right, isThreadRight };
		return newNode;
	}

	Node* findDirection(Node* p) {
		Node* q = p->right;
		if (q == NULL) { return q; }
		if (p->isThreadRight) { return q; }
		while (q->left) { q = q->left; }
		return q;
	}

	void inorder(Node* root) {
		Node* q = root;
		while (q->left) { q = q->left; }
		do {
			cout << q->data << " ";
			q = findDirection(q);
		} while (q);
	}
}

#endif