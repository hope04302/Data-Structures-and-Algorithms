#include <iostream>
#include <cmath>

#ifndef __BinaryTree__
#define __BinaryTree__

using namespace std;

// 0을 빈칸의 의미로 씀.
class Tree {

private:

	int max;

public:

	int* tree;

	Tree(int level = 10) {
		max = pow(2, level + 1);
		tree = new int[max] {};
	}

	~Tree() {
		delete[] tree;
	}

	// 전위 순회(preorder traversal)
	void preorder(int root = 1) {
		if (root < max && tree[root] != 0) {
			cout << tree[root] << " ";
			preorder(root * 2);
			preorder(root * 2 + 1);
		}
	}

	// 중위 순회
	void inorder(int root = 1) {
		if (root < max && tree[root] != 0) {
			inorder(root * 2);
			cout << tree[root] << " ";
			inorder(root * 2 + 1);
		}
	}

	// 후위 순회
	void postorder(int root = 1) {
		if (root < max && tree[root] != 0) {
			postorder(root * 2);
			postorder(root * 2 + 1);
			cout << tree[root] << " ";
		}
	}

};

#endif