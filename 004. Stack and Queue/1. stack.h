#include <iostream>

#ifndef __Stack__
#define __Stack__
#define DEFALUT_MAX 1000

using namespace std;

class OrderedStack {

private:

	int* stack;
	int max;
	int top_idx;

public:

	OrderedStack(int def = DEFALUT_MAX) {
		max = def;
		top_idx = -1;
		stack = new int[max];
	}

	~OrderedStack() {
		delete[] stack;
	}

	void print(const char x[] = "") {
		cout << x << "{ OStack: ";
		for (int i = 0; i <= top_idx; i++) {
			cout << stack[i] << " ";
		}
		cout << "} <->" << endl;
	}

	bool is_full() {
		if (top_idx + 1 == max) { return true; }
		return false;
	}

	bool is_empty() {
		if (top_idx == -1) { return true; }
		return false;
	}

	void push(int x) {
		if (is_full()) { return; }
		stack[++top_idx] = x;
	}

	int pop() {
		if (is_empty()) { return NULL; }
		return stack[top_idx];
	}

	int top() {
		return stack[top_idx];
	}

};


class LinkedStack {

private:

	struct Node {
		int data;
		Node* link;
	};

	Node* top_pt;

public:

	LinkedStack() {
		top_pt = NULL;
	}

	~LinkedStack() {
		Node* temp;
		while (top_pt != NULL) {
			temp = top_pt->link;
			delete top_pt;
			top_pt = temp;
		}
	}

	bool is_empty() {
		if (top_pt == NULL) { return true; }
		return false;
	}

	void print(const char x[] = "") {
		cout << x << "<-> { LStack: ";
		Node* p = top_pt;
		while (p != NULL) {
			cout << p->data << " ";
			p = p->link;
		}
		cout << "}" << endl;
	}

	void push(int x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->link = top_pt;
		top_pt = newNode;
	}

	int pop() {
		if (is_empty()) { return NULL; }
		Node* erase = top_pt;
		int x = top_pt->data;
		top_pt = top_pt->link;
		delete erase;
		return x;
	}

	int top() {
		return top_pt->data;
	}

};

#endif