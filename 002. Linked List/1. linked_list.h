#include <iostream>
#include <string>
#include "0. node.h"

#ifndef __LinkedList__
#define __LinkedList__

using namespace std;

class LinkedList {

private:

	Head* L;

public:

	LinkedList() {
		L = new Head;
		L->head = NULL;
	}

	~LinkedList() {
		clear();
		delete L;
	}

	void clear() {
		Node* p;
		while (L->head != NULL) {
			p = L->head;
			L->head = L->head->link;
			delete p;
			p = NULL;
		}
	}

	void print() {
		Node* p;
		string str = "L = ( ";
		p = L->head;
		while (p != NULL) {
			str = str + p->data + " ";
			p = p->link;
		}
		str += ")";
		cout << str << endl;
	}

	void insertFirst(const string& x) {
		Node* newNode = new Node;
		newNode->data = x;
		newNode->link = L->head;
		L->head = newNode;
	}

	void insertMiddle(const string& x, Node* pre) {
		Node* newNode = new Node;
		newNode->data = x;
		if (L->head == NULL) {
			newNode->link = NULL;
			L->head = newNode;
		}
		else {
			newNode->link = pre->link;
			pre->link = newNode;
		}
	}

	void insertLast(const string& x) {
		Node* newNode = new Node;
		Node* temp;
		newNode->data = x;
		newNode->link = NULL;
		if (L->head == NULL) {
			L->head = newNode->link;
			return;
		}
		temp = L->head;
		while (temp->link != NULL) {
			temp = temp->link;
		}
		temp->link = newNode;
	}

	void remove(Node* p) {
		Node* pre;
		if (L->head == NULL) return;
		else if (p == NULL) return;
		else if (L->head->link == NULL) {
			delete L->head;
			L->head = NULL;
			return;
		}
		else {
			pre = L->head;
			if (pre != p) {
				while (pre->link != p) {
					pre = pre->link;
				}
				pre->link = p->link;
				delete p;
			}
			else {
				L->head = p->link;
				delete p;
			}

		}
	}

	Node* find(const string& x) {
		Node* temp;
		temp = L->head;
		while (temp != NULL) {
			if (temp->data == x) return temp;
			else temp = temp->link;
		}
		return temp;
	}

	void reverse() {
		Node* p, * q, * r;
		p = L->head;
		q = NULL;
		r = NULL;

		while (p != NULL) {
			r = q;
			q = p;
			p = p->link;
			q->link = r;
		}
		L->head = q;
	}
};

#endif