//#include <iostream>
//#include "3. traversal.h"
//
//using namespace std;
//
//int main() {
//
//	TraversalGraph a;
//
//	cout << "graph: " << endl;
//	a.insertVertex(7);
//	a.insertEdge(0, 2);
//	a.insertEdge(0, 1);
//	a.insertEdge(1, 4);
//	a.insertEdge(1, 3);
//	a.insertEdge(1, 0);
//	a.insertEdge(2, 4);
//	a.insertEdge(2, 0);
//	a.insertEdge(3, 6);
//	a.insertEdge(3, 1);
//	a.insertEdge(4, 6);
//	a.insertEdge(4, 2);
//	a.insertEdge(4, 1);
//	a.insertEdge(5, 6);
//	a.insertEdge(6 ,5);
//	a.insertEdge(6, 4);
//	a.insertEdge(6, 3);
//	a.print();
//	cout << endl;
//
//	cout << "DFS: ";
//	a.DFS(0);
//	cout << endl;
//
//	cout << "BFS: ";
//	a.BFS(0);
//	cout << endl;
//
//	return 0;
//}