#include <iostream>
#include <cmath>

#ifndef __BinarySearchTree__
#define __BinarySearchTree__

using namespace std;

/*
모든 원소는 서로 다른 key를 가짐
원소의 키 크기: left tree < 루트 < right tree
*/
namespace searchTree {

	struct Node {
		int key;
		Node* left;
		Node* right;
	};

	void inorder(Node* root) {
		if (root) {
			inorder(root->left);
			cout << root->key << " ";
			inorder(root->right);
		}
	}

	Node* search(Node* root, int x) {
		Node* temp = root;
		while (temp) {
			if (x < temp->key) { temp = temp->left; }
			else if (x > temp->key) { temp = temp->right; }
			else { return temp; }
		}
		return NULL;
	}

	Node* insert(Node* p, int x) {
		if (p == NULL) {
			Node* newNode = new Node{ x, NULL, NULL };
			return newNode;
		}
		else if (x < p->key) { p->left = insert(p->left, x); }
		else if (x > p->key) { p->right = insert(p->right, x); }
		else { return NULL; }
		return p;
	}

	void remove(Node* root, int x) {

		Node* parent = NULL;
		Node* targ = root;
		while (targ && (targ->key != x)) {
			parent = targ;
			if (x < targ->key) { targ = targ->left; }
			else { targ = targ->right; }
		}

		// no search
		if (targ == NULL) { return; }

		int child_num = int(targ->left != NULL) + int(targ->right != NULL);

		// 0 child
		if (child_num == 0) {
			if (parent) {
				if (parent->left == targ) { parent->left = NULL; }
				else { parent->right = NULL; }
			}
			else { root = targ; }
		}

		// 1 child
		if (child_num == 1) {
			Node* child = NULL;
			if (targ->left) { child = targ->left; }
			else { child = targ->right; }

			if (parent) {
				if (parent->left == targ) { parent->left = child; }
				else { parent->right = child; }
			}
			else { root = child; }
		}

		// 2 child
		if (child_num == 2) {
			Node* succ_parent = targ;
			Node* succ = targ->left;
			// succ->data <- key of largest number of left tree
			while (succ->right != NULL) {
				succ_parent = succ;
				succ = succ->right;
			}

			if (succ_parent->left == succ) { succ_parent->left = succ->left; }
			else { succ_parent->right = succ->left; }
			targ->key = succ->key;
			targ = succ;	// 기존 targ를 key만 바꿔 살리고, 대신 succ를 제거
		}

		delete targ;
	}
};

#endif