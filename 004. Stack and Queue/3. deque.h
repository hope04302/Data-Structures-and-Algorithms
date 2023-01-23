#include <iostream>

#ifndef __Deque__
#define __Deque__

#define DEFAULT_MAX 1000

using namespace std;

class OrderedDeque {

private:

	int div(int x, int y) {
		if (x % y >= 0) {
			return x % y;
		}
		else {
			return x % y + y;
		}
	}

	int max;
	int front;
	int rear;
	int* deque;

public:

	OrderedDeque(int def = DEFAULT_MAX) {
		max = def;
		front = 0;
		rear = -1;
		deque = new int[max];
	}

	~OrderedDeque() {
		delete[] deque;
	}

	void print(const char x[] = "") {
		cout << x << "<-> { ODeque: ";
		for (int i = front; i <= rear; i++) {
			cout << deque[div(i, max)] << " ";
		}
		cout << "} <->" << endl;
	}

	bool is_empty() {
		if (div(rear, max) == div(front - 1, max)) { return true; }
		return false;
	}

	bool is_full() {
		if (div(rear, max) == div(front - 2, max)) { return true; }
		return false;
	}

	void push_front(int x) {
		if (is_full()) { return; }
		deque[div(--front, max)] = x;
	}

	void push_back(int x) {
		if (is_full()) { return; }
		deque[div(++rear, max)] = x;
	}

	int pop_front() {
		if (is_empty()) { return NULL; }
		return deque[div(++front, max)];
	}

	int pop_back() {
		if (is_empty()) { return NULL; }
		return deque[div(--rear, max)];
	}
};


class LinkedDeque {

private:

	struct Node {
		int data;
		Node* rlink;
		Node* llink;
	};

	Node* rear, * front;

public:

	LinkedDeque() {
		rear = NULL;
		front = NULL;
	}

	~LinkedDeque() {

	}

	void print(const char x[] = "") {
		cout << x << "<-> { LDeque: ";
		Node* temp = front;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->rlink;
		}
		cout << "} <->" << endl;
	}

	bool is_empty() {
		if (front == NULL) { return true; }
		return false;
	}

	void push_front(int x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->llink = NULL;
		newNode->rlink = front;
		if (front != NULL) {
			front->llink = newNode;
		}
		else {
			rear = newNode;
		}
		front = newNode;
	}

	void push_back(int x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->rlink = NULL;
		newNode->llink = rear;
		if (rear != NULL) {
			rear->rlink = newNode;
		}
		else {
			front = newNode;
		}
		rear = newNode;
	}

	int pop_front() {
		if (is_empty()) { return NULL; }
		int x;
		if (front == rear) {
			x = front->data;
			delete front;
			front = NULL;
			rear = NULL;
		}
		else {
			Node* temp = front;
			x = temp->data;
			front = front->rlink;
			delete temp;
			front->llink = NULL;
		}
		return x;
	}

	int pop_back() {
		if (is_empty()) { return NULL; }
		int x;
		if (front == rear) {
			x = front->data;
			delete front;
			front = NULL;
			rear = NULL;
		}
		else {
			Node* temp = rear;
			x = temp->data;
			rear = rear->llink;
			delete temp;
			rear->rlink = NULL;
		}
		return x;
	}

};

#endif // !__Deque__
