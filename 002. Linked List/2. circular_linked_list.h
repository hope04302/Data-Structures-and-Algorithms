#include <iostream>
#include <string>
#include "0. node.h"

#ifndef __CircularLinkedList__
#define __CircularLinkedList__

using namespace std;

class CircularLinkedList {

private:

	Head* CL;

public:

	CircularLinkedList() {
		CL = new Head;
		CL->head = NULL;
	}

	void print() {
		Node* p;
		string str = "CL = ( ";
		p = CL->head;
		if (p != NULL) {
			do {
				str = str + p->data + " ";
				p = p->link;
			} while (p != CL->head);
		}
		str += ")";
		cout << str << endl;
	}

	void insertFirst(const string& x) {
		Node* newNode = new Node;
		newNode->data = x;
		if (CL->head == NULL) {
			newNode->link = newNode;
			CL->head = newNode;
			return;
		}
		Node* temp = CL->head;
		while (temp->link != CL->head) {
			temp = temp->link;
		}
		temp->link = newNode;
		newNode->link = CL->head;
		CL->head = newNode;
	}

	void insertMiddle(const string& x, Node* pre) {
		Node* newNode = new Node;
		newNode->data = x;
		if (CL->head == NULL) {
			newNode->link = newNode;
			CL->head = newNode;
			return;
		}
		newNode->link = pre->link;
		pre->link = newNode;
	}

	void insertLast(const string& x) {
		Node* newNode = new Node;
		newNode->data = x;
		if (CL->head == NULL) {
			newNode->link = newNode;
			CL->head = newNode->link;
			return;
		}
		Node* temp = CL->head;
		while (temp->link != CL->head) {
			temp = temp->link;
		}
		newNode->link = CL->head;
		temp->link = newNode;
	}

	void remove(Node* p) {
		if (CL->head == NULL) return;
		else if (p == NULL) return;
		else if (CL->head->link == CL->head) {
			delete CL->head;
			CL->head = NULL;
			return;
		}
		else {
			Node* pre = CL->head;
			while (pre->link != p) {
				pre = pre->link;
			}
			pre->link = p->link;
			if (p == CL->head) {
				CL->head = p->link;
			}
			delete p;
		}
	}

	Node* find(const string& x) {
		Node* temp;
		temp = CL->head;
		do  {
			if (temp->data == x) return temp;
			else temp = temp->link;
		} while (temp != CL->head);
		return temp;
	}
};

#endif