#include <iostream>
#include "2. graph(list).h"

using namespace std;

int main() {

	Graph a;

	cout << "first graph: " << endl;
	a.insertVertex(4);
	a.insertEdge(0, 3);
	a.insertEdge(0, 1);
	a.insertEdge(1, 3);
	a.insertEdge(1, 2);
	a.insertEdge(1, 0);
	a.insertEdge(2, 3);
	a.insertEdge(2, 1);
	a.insertEdge(3, 2);
	a.insertEdge(3, 1);
	a.insertEdge(3, 0);
	a.print();
	cout << endl;

	cout << "second graph: " << endl;
	a.deleteEdge(3, 0);
	a.deleteEdge(2, 3);
	a.print();
	cout << endl;

	return 0;
}