//#include <iostream>
//#include <vector>
//
//#define SIZE 8
//
//using namespace std;
//
//void swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void arrPrint(int a[], int n) {
//	for (int i = 0; i < n; i++) {
//		printf("%3d ", a[i]);
//	}
//	cout << endl;
//}
//
//void selectionSort(int a[], int n) {
//	int min_idx;
//	cout << "<<<<<<<<<< Selection Sort >>>>>>>>>>\n";	// un-necessary part
//	cout << "0번째: ";	// un-necessary part
//	arrPrint(a, n);	// un-necessary part
//	for (int i = 0; i < n - 1; i++) {
//		min_idx = i;
//		for (int j = i + 1; j < n; j++) {
//			if (a[min_idx] > a[j]) {
//				min_idx = j;
//			}
//		}
//		swap(a[i], a[min_idx]);
//		cout << i + 1 << "번째: ";	// un-necessary part
//		arrPrint(a, n);	// un-necessary part
//	}
//}
//
//// swap이 없으면 end하도록 할 수 있음.
//void bubbleSort(int a[], int n) {
//	cout << "<<<<<<<<<< Bubble Sort >>>>>>>>>>\n";	// un-necessary part
//	cout << "0번째: ";	// un-necessary part
//	arrPrint(a, n);	// un-necessary part
//	for (int i = n; i > 0; i--) {
//		for (int j = 0; j < i - 1; j++) {
//			if (a[j] > a[j + 1]) {
//				swap(a[j], a[j + 1]);
//			}
//		}
//		cout << n - i + 1 << "번째: ";	// un-necessary part
//		arrPrint(a, n);	// un-necessary part
//	}
//}
//
//void insertSort(int a[], int n) {
//	int temp, idx;
//	cout << "<<<<<<<<<< Insert Sort >>>>>>>>>>\n";	// un-necessary part
//	cout << "0번째: ";	// un-necessary part
//	arrPrint(a, n);	// un-necessary part
//	for (int i = 1; i < n; i++) {
//		temp = a[i];
//		idx = i;
//		while ((idx > 0) && (a[idx - 1] > temp)) {	// warning!
//			a[idx] = a[idx - 1];
//			idx -= 1;
//		}
//		a[idx] = temp;
//		cout << i << "번째: ";	// un-necessary part
//		arrPrint(a, n);	// un-necessary part
//	}
//}
//
//int main() {
//
//	//// codes for fast process
//	//ios_base::sync_with_stdio(false);
//	//cin.tie(NULL);
//	//cout.tie(NULL);
//
//	int arr[SIZE] = {69, 10, 30, 2, 16, 8, 31, 22};
//	selectionSort(arr, SIZE);
//	cout << endl;
//
//	int arr2[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
//	bubbleSort(arr2, SIZE);
//	cout << endl;
//
//	int arr3[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
//	insertSort(arr3, SIZE);
//	cout << endl;
//
//	return 0;
//}