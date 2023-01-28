//#include <iostream>
//
//using namespace std;
//
//
//struct Data {
//	string word;
//	string mean;
//};
//
//struct Node {
//	Data key;
//	Node* left;
//	Node* right;
//};
//
//// strcmp or str.compare()
//int compare(string& x, string& y) {
//	if (x < y) { return -1; }
//	else if (x == y) { return 0; }
//	else { return 1; }
//}
//
//class BinarySearchTree {
//
//private:
//
//public:
//
//	Node* root;
//
//	BinarySearchTree(Data* key) {
//		root = new Node{ *key, NULL, NULL };
//	}
//
//	// insert
//	Node* insert(Node* p, Data* key) {
//		if (!p) {
//			Node* newNode = new Node{ *key, NULL, NULL };
//			return newNode;
//		}
//		else {
//			int comp = compare(key->word, p->key.word);
//			if (comp < 0) { p->left = insert(p->left, key); }
//			else if (comp > 0) { p->right = insert(p->right, key); }
//			else { cout << "insert error!" << endl; }
//			return p;
//		}
//	}
//
//	void insert(Data* key) {
//		root = insert(root, key);
//	}
//
//	// delete
//	Node* remove(Node* p, Data* key) {
//		if (!p) {
//			cout << "delete error!" << endl;
//			return NULL;
//		}
//		else {
//			int comp = compare(key->word, p->key.word);
//			if (comp < 0) { p->left = remove(p->left, key); }
//			else if (comp > 0) { p->right = remove(p->right, key); }
//			else {
//				/*
//				mode == 0 -> no child
//				mode == 1 or 2 -> 1 child(1: left, 2: right)
//				mode == 3 -> 2 children
//				*/
//				int mode = int(p->left != NULL) + int(p->left != NULL) * 2;
//
//				// 0 child
//				if (mode == 0) {
//					delete p;
//					return NULL;
//				}
//
//				// 1 child
//				else if (mode == 1) {
//					Node* child = p->left;
//					delete p;
//					return child;
//				}
//				else if (mode == 2) {
//					Node* child = p->right;
//					delete p;
//					return child;
//				}
//
//				// 2 child
//				else {
//					Node* succ_parent = p;
//					Node* succ = p->right;
//					while(succ->left) {
//						succ_parent = succ;
//						succ = succ->left;
//					}
//					/*
//					else is in the case like,
//
//						O		<- p
//					  /   \
//					 O     O		<- succ
//
//					*/
//					if (succ_parent->left == succ) { succ_parent->left = succ->right; }
//					else { succ_parent->right = succ->right; }
//					p->key = succ->key;
//					delete succ;
//					return p;
//				}
//			}
//			return p;	// comp != 0
//		}
//	}
//
//	void remove(Data* key) {
//		root = remove(root, key);
//	}
//
//	// search
//	void search(Data* key) {
//		int comp;
//		Node* p = root;
//		while (p) {
//			comp = compare(key->word, p->key.word);
//			if (comp < 0) { p = p->left; }
//			else if (comp > 0) { p = p->right; }
//			else {
//				cout << "find " << p->key.word << " : " << p->key.mean << endl;
//				return;
//			}
//		}
//		cout << "no search" << endl;
//		return;
//	}
//
//	void inorder(Node* p) {
//		if (p) {
//			inorder(p->left);
//			cout << p->key.word << " : " << p->key.mean << endl;
//			inorder(p->right);
//		}
//	}
//
//	void inorder() {
//		cout << ">>>>>>>>>> start inorder traversal:" << endl;
//		inorder(root);
//		cout << ">>>>>>>>>>" << endl;
//	}
//
//};
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	Data root = { "boy", "¼Ò³â" };
//	BinarySearchTree a(&root);
//
//	bool rot = true;
//	int mode;
//	Data element = { "", "" };
//
//	while (rot) {
//		cout << "\n-------------------" << endl;
//		cout << "1. insert" << endl;
//		cout << "2. delete" << endl;
//		cout << "3. search" << endl;
//		cout << "4. display" << endl;
//		cout << "5. exit" << endl;
//		cout << "-------------------\n" << endl;
//
//		cin >> mode;
//
//		switch (mode) {
//
//		case 1:
//			// get() -> spaceµµ ok.
//			cin >> element.word;
//			cin >> element.mean;
//			a.insert(&element);
//			break;
//
//		case 2:
//			cin >> element.word;
//			a.remove(&element);
//			break;
//
//		case 3:
//			cin >> element.word;
//			a.search(&element);
//			break;
//
//		case 4:
//			a.inorder();
//			break;
//
//		case 5:
//			rot = false;
//			break;
//
//		default:
//			break;
//		}
//	}
//
//}