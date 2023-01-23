/* application of heap */

#include <iostream>
#include "4. heap.h"

using namespace std;

int main() {

	Heap a;
	a.insert(10);
	a.insert(45);
	a.insert(19);
	a.insert(11);
	a.insert(96);

	cout << "[1]: ";
	a.print();
	cout << endl;

	cout << "[a]: " << a.remove() << endl;
	cout << "[b]: " << a.remove() << endl;
	cout << "[c]: " << a.remove() << endl;
	cout << "[d]: " << a.remove() << endl;
	cout << "[e]: " << a.remove() << endl;

	cout << endl << "[2]: ";
	a.print();
	cout << endl;

	return 0;
}