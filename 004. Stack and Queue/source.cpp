/* ordered & linked stack; circular & linked queue, deque */

#include <iostream>
#include <string>
#include "1. stack.h"
#include "2. queue.h"
#include "3. deque.h"

using namespace std;

int main() {

	OrderedStack a(10);

	a.push(10);
	a.print("a = ");
	a.push(20);
	a.print("a = ");

	cout << a.top() << endl;

	a.pop();
	a.print("a = ");
	a.pop();
	a.print("a = ");

	LinkedStack b;

	b.push(10);
	b.push(20);
	b.print("b = ");

	b.pop();
	b.push(-10);
	b.print("b = ");

	OrderedQueue c;

	c.push(10);
	c.print("c = ");
	c.push(20);
	c.print("c = ");

	c.pop();
	c.push(30);
	c.print("c = ");

	LinkedQueue d;

	d.push(10);
	d.print("d = ");
	d.push(20);
	d.print("d = ");

	d.pop();
	d.push(30);
	d.print("d = ");

	d.pop();
	d.pop();
	d.print("d = ");

	//OrderedDeque e;

	//e.push_back(10);
	//e.print("e = ");
	//e.push_back(20);
	//e.print("e = ");

	//e.push_front(30);
	//e.print("e = ");

	//e.pop_back();
	//e.pop_back();
	//e.print("e = ");

	LinkedDeque e;

	e.push_back(10);
	e.print("e = ");
	e.push_back(20);
	e.print("e = ");

	e.push_front(30);
	e.print("e = ");

	e.pop_back();
	e.pop_back();
	e.print("e = ");

	return 0;
}