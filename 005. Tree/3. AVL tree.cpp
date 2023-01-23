/* AVL ±¸Çö */

#include <iostream>
#include "3. AVL tree.h"

using namespace std;

int main() {

	AVLTree a(50);
	a.insert(60, a.root);
	a.insert(7, a.root);
	a.insert(90, a.root);
	a.insert(80, a.root);
	a.insert(75, a.root);
	a.insert(73, a.root);
	a.insert(72, a.root);
	a.insert(78, a.root);
	a.inorder(a.root);

	return 0;
}