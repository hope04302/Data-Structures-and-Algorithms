#include <iostream>
#include "1. linked_list.h"
#include "2. circular_linked_list.h"
#include "3. doubly_linked_list.h"
#include "4. polynomial.h"

int main() {

	//LinkedList a;

	//a.print();

	//a.insertFirst("1");
	//a.print();
	//getchar();

	//a.insertFirst("2");
	//a.print();
	//getchar();

	//a.insertLast("3");
	//a.print();
	//getchar();

	//Node* t = a.find("2");
	//a.remove(t);
	//a.print();
	//getchar();

	//a.reverse();
	//a.print();
	//getchar();

	//a.clear();
	//a.print();
	
	//CircularLinkedList a;

	//a.print();

	//a.insertFirst("1");
	//a.print();
	//getchar();

	//a.insertFirst("2");
	//a.print();
	//getchar();

	//a.insertLast("3");
	//a.print();
	//getchar();

	//Node* t = a.find("2");
	//a.remove(t);
	//a.print();
	//getchar();

	//DoublyLinkedList a;

	//a.print();

	//a.insert("1");
	//a.insert("3");
	//a.insert("2", a.find("3"));
	//a.print();
	//a.remove(a.find("3"));

	//a.print();

	PolynomialLinkedList a, b, c;

	a.print("A(x) = ");

	a.insert(2, 4);
	a.insert(3, 2);
	a.insert(7, 0);
	a.print("A(x) = ");

	b.print("B(x) = ");

	b.insert(2, 4);
	b.insert(3, 2);
	b.insert(7, 0);
	b.print("B(x) = ");

	c = add(a, b);
	c.print("C(x) = ");

	return 0;
}