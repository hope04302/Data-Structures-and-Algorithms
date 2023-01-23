#include <iostream>

#ifndef __Queue__
#define __Queue__
#define DEFAULT_MAX 1000

using namespace std;

// 정확히는 circular linked queue임.
class OrderedQueue {

private:

	int max;
	int front;
	int rear;
	int* queue;

public:

	OrderedQueue(int def = DEFAULT_MAX) {
		max = def;
		front = 0;
		rear = 0;
		queue = new int[max];
	}

	~OrderedQueue() {
		delete[] queue;
	}

	void print(const char x[] = "") {
		cout << x << "-> { OQueue: ";
		for (int i = rear; i > front; i--) {
			cout << queue[i] << " ";
		}
		cout << "} ->" << endl;
	}

	bool is_full() {
		if ((rear + 1) % max == front % max) { return true; }
		return false;
	}

	bool is_empty() {
		if (rear == front) { return true; }
		return false;
	}

	void push(int x) {
		if (is_full()) { return; }
		queue[(++rear) % max] = x;
	}

	int pop() {
		if (is_empty()) { return NULL; }
		return queue[(++front) % max];
	}
};


class LinkedQueue {

private:

	struct Node {
		int data;
		Node* link;
	};

	Node* rear;
	Node* front;

public:

	LinkedQueue() {
		rear = NULL;
		front = NULL;
	}

	~LinkedQueue() {
		Node* temp;
		while (rear != NULL) {
			temp = rear->link;
			delete rear;
			rear = temp;
		}
	}

	bool is_empty() {
		if (front == NULL) { return true; }
		return false;
	}

	void print(const char x[] = "") {
		cout << x << "-> { LQueue: ";
		Node* p = front;
		while (p != NULL) {
			cout << p->data << " ";
			p = p->link;
		}
		cout << "} ->" << endl;
	}

	void push(int x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->link = NULL;
		if (rear != NULL) {
			rear->link = newNode;
		}
		else {
			front = newNode;
		}
		rear = newNode;
	}

	int pop() {
		if (is_empty()) { return NULL; }
		Node* temp = front->link;
		int x = front->data;
		delete front;
		front = temp;
		if (front == NULL) { rear = NULL; }
		return x;
	}

};
#endif