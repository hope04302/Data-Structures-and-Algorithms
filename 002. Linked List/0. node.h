#include <iostream>
#include <string>

#ifndef __Node__
#define __Node__

using namespace std;

struct Node {
	string data;
	Node* link;
};

struct DNode {
	DNode* llink;
	string data;
	DNode* rlink;
};

struct PNode {
	double coef;
	int expo;
	PNode* link;
};

struct Head {
	Node* head;
};

struct DHead {
	DNode* head;
};

struct PHead {
	PNode* head;
};


#endif