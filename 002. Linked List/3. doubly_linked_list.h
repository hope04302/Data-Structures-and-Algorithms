#include <iostream>
#include <string>
#include "0. node.h"

#ifndef __DoublyLinkedList__
#define __DoublyLinkedList__


using namespace std;

// 정확히는 이중 원형 연결 리스트
class DoublyLinkedList {

private:

	DHead* DL;

public:

	DoublyLinkedList() {
		DL = new DHead;
		DL->head = NULL;
	}

	void print() {
		cout << "DL = ( ";
		DNode* temp = DL->head;
		if (DL->head != NULL) {
			do {
				cout << temp->data + " ";
				temp = temp->rlink;
			} while (temp != DL->head);
		}
		cout << ")" << endl;
	}

	void insert(string x, DNode* pre = NULL) {
		DNode* newNode = new DNode;
		newNode->data = x;

		if (DL->head == NULL) {
			newNode->rlink = newNode;
			newNode->llink = newNode;
			DL->head = newNode;
		}
		else if (pre == NULL) {
			newNode->rlink = DL->head;
			newNode->llink = DL->head->llink;
			DL->head->llink->rlink = newNode;
			DL->head->llink = newNode;
			DL->head = newNode;
		}
		else {
			newNode->rlink = pre->rlink;
			newNode->llink = pre;
			pre->rlink->llink = newNode;
			pre->rlink = newNode;
		}
	}

	DNode* find(string x) {
		DNode* temp = DL->head;
		if (temp != NULL) {
			do {
				if (x == temp->data) {
					return temp;
				}
				temp = temp->rlink;
			} while (temp != DL->head);
		}
		return NULL;
	}

	void remove(DNode* tg) {
		if (DL->head == NULL) return;
		DNode* left, * right;
		left = tg->llink;
		right = tg->rlink;
		left->rlink = right;
		right->llink = left;
		if (DL->head == tg) {
			DL->head = right;
		}
		delete tg;
	}

};

#endif