/* cf) linked binary list(엄밀히는 thread binary tree)를 이용한 순회 */

//#include <iostream>
//#include "1-1. (linked) binary tree.h"
//
//using namespace std;
//using namespace tree;
//
//int main() {
//
//	Node* n7 = appendNode('D', NULL, NULL, false);
//	Node* n6 = appendNode('C', NULL, NULL, true);
//	Node* n5 = appendNode('B', NULL, NULL, true);
//	Node* n4 = appendNode('A', NULL, NULL, true);
//	Node* n3 = appendNode('*', n6, n7, false);
//	Node* n2 = appendNode('/', n4, n5, false);
//	Node* n1 = appendNode('+', n2, n3, false);
//
//	n4->right = n2;
//	n5->right = n1;
//	n6->right = n3;
//
//	cout << "inorder: ";
//	inorder(n1);
//	cout << endl;
//
//	return 0;
//}