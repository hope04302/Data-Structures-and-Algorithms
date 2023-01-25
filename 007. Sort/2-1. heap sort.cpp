//#include <iostream>
//#include "005. Tree - 4. heap(fixed).h"
//
//#define SIZE 8
//
//using namespace std;
//
//void arrPrint(int a[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%3d ", a[i]);
//	}
//	cout << endl;
//}
//
//int main() {
//
//	int arr[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
//	cout << "<<<<<<<<<< Heap Sort >>>>>>>>>>\n";	// un-necessary part
//	arrPrint(arr, SIZE);	// un-necessary part
//	Heap a;
//	for (int i = 0; i < SIZE; i++) {
//		a.insert(arr[i]);
//	}
//	a.heapSort();
//	for (int i = 0; i < SIZE; i++) {	// un-necessary part
//		arr[i] = a.heap[i + 1];
//	}
//	arrPrint(arr, SIZE);	// un-necessary part
//	cout << endl;	// un-necessary part
//
//	return 0;
//}