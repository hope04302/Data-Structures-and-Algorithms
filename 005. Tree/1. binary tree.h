#include <iostream>
#include <cmath>

#ifndef __BinaryTree__
#define __BinaryTree__

using namespace std;

class Tree {

private:

	int* tree;
	int* 

public:

	Tree(int level = 10) {
		tree = new int[pow(2, level + 1)];
	}

	~Tree() {
		delete[] tree;
	}



};

#endif