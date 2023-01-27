#include <iostream>

using namespace std;

class BinarySearchTree {

private:

	struct Data {
		string word;
		string mean;
	};

	struct Node {
		Data* key;
		Node* left;
		Node* right;
	};

	// strcmp or str.compare()
	int compare(string& x, string& y) {
		if (x < y) { return -1; }
		else if (x == y) { return 0; }
		else { return 1; }
	}

public:

	Node* root;

	BinarySearchTree(Data* key) {
		root = new Node{ key, NULL, NULL };
	}

	// insert
	Node* insert(Node* p, Data* key) {
		if (!p) {
			Node* newNode = new Node{ key, NULL, NULL };
			return newNode;
		}
		else {
			int comp = compare(key->word, p->key->word);
			if (comp < 0) { p->left = insert(p->left, key); }
			else if (comp > 0) { p->right = insert(p->right, key); }
			else { return NULL; }
		}
	}

	void insert(Data* key) {
		insert(root, key);
	}

	// delete
	Node* remove(Node* p, Data* key) {
		if (!p) { return NULL; }
		else {
			int comp = compare(key->word, p->key->word);
			if (comp < 0) { p->left = remove(p->left, key); }
			else if (comp > 0) { p->right = remove(p->right, key); }
			else {
				/*
				mode == 0 -> no child
				mode == 1 or 2 -> 1 child(1: left, 2: right)
				mode == 3 -> 2 children
				*/
				int mode = int(p->left != NULL) + int(p->left != NULL) * 2;

				// 0 child
				if (mode == 0) {
					delete p;
					return NULL;
				}

				// 1 child
				else if (mode == 1) {
					Node* child = p->left;
					delete p;
					return child;
				}
				else if (mode == 2) {
					Node* child = p->right;
					delete p;
					return child;
				}

				// 2 child
				else {
					Node* succ_parent = p;
					Node* succ = p->right;
					while(succ->left) {
						succ_parent = succ;
						succ = succ->left;
					}
					/*
					else is in the case like,

						O		<- p
					  /   \
					 O     O		<- succ

					*/
					if (succ_parent->left == succ) { succ_parent->left = succ->right; }
					else { succ_parent->right = succ->right; }
					p->key = succ->key;
					delete succ;
					return p;
				}
			}
		}
	}

};

int main() {

}