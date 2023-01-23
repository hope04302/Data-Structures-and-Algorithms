#include <iostream>
#include "0. node.h"

#ifndef __Polynomial__
#define __Polynomial__

using namespace std;

class PolynomialLinkedList {

private:

public:

	PHead* PL;

	PolynomialLinkedList() {
		PL = new PHead;
		PL->head = NULL;
	}

	void print(string d = "") {
		cout << d;
		PNode* temp = PL->head;
		while (temp != NULL) {
			cout << temp->coef << "x" << temp->expo;
			temp = temp->link;
			if (temp != NULL) {
				cout << " + ";
			}
		}
		cout << endl;
	}

	void insert(double coef, int expo) {
		PNode* newNode = new PNode{ coef, expo, NULL };
		PNode* temp = PL->head;
		if (temp == NULL) {
			PL->head = newNode;
			return;
		}
		while (temp->link != NULL) {
			temp = temp->link;
		}
		temp->link = newNode;
	}

};

PolynomialLinkedList add(PolynomialLinkedList a, PolynomialLinkedList b) {
	PolynomialLinkedList sum;
	PNode* pA = a.PL->head;
	PNode* pB = b.PL->head;
	while (pA && pB) {
		if (pA->expo == pB->expo) {
			sum.insert(pA->coef + pB->coef, pA->expo);
			pA = pA->link; pB = pB->link;
		}
		else if (pA->expo > pB->expo) {
			sum.insert(pA->coef, pA->expo);
			pA = pA->link;
		}
		else {
			sum.insert(pB->coef, pB->expo);
			pB = pB->link;
		}
	}

	while (pA) {
		sum.insert(pA->coef, pA->expo);
		pA = pA->link;
	}

	while (pB) {
		sum.insert(pB->coef, pB->expo);
		pB = pB->link;
	}
	return sum;
}

#endif // !__Polynomial__
