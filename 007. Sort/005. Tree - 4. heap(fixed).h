#include <iostream>
#include <vector>

#ifndef __Heap__
#define __Heap__

using namespace std;

// level이 낮아질수록 key도 작아짐
class Heap {

private:

public:

	vector<int> heap;	// fixed
	int size;	// fixed

	Heap() {
		size = 0;
		heap.resize(1);
	}

	void insert(int item) {
		size++;
		heap.resize(size + 1);
		int i = size;
		while ((i != 1) && (item > heap[i / 2])) {
			heap[i] = heap[i / 2];
			i /= 2;
		}
		heap[i] = item;
	}

	/* fixed */
	int remove() {
		int item = heap[1];
		int temp = heap[size];
		size--;
		//heap.resize(size + 1);
		if (size == 0) { return item; }
		int parent = 1;
		int child = 2;
		while (child <= size) {
			if ((child < size) && (heap[child] < heap[child + 1])) { child++; }
			if (temp >= heap[child]) { break; }
			else {
				heap[parent] = heap[child];
				parent = child;
				child = child * 2;
			}
		}
		heap[parent] = temp;
		return item;
	}

	/* fized */
	void heapSort() {
		while (size > 1) {
			int larg = remove();
			heap[size + 1] = larg;
			print();
		}
	}

	void print() {
		cout << "{ heap: ";
		for (int i = 1; i <= size; i++) {
			cout << heap[i] << " ";
		}
		cout << "}" << endl;
	}
};

#endif // !__Heap__
