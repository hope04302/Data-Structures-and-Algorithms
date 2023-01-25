//#include <iostream>
//
//#define SIZE 8
//
//using namespace std;
//
//int step, step2;
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
//// Quick Sort
//int partition(int a[], int b, int e) {
//	int L = b;
//	int R = e;
//	int pivot = (b + e) / 2;	// pivot = b; also possible
//
//	while (L < R) {
//		while ((a[L] < a[pivot]) && (L < R)) { L++; }	// a[pivot]보다 a[L]이 크거나 같을 때...
//		while ((a[R] >= a[pivot]) && (L < R)) { R--; }	// a[pivot]보다 a[R]이 작을 때...
//		if (L < R) {
//			swap(a[L], a[R]);
//			if (L == pivot) { pivot = R; }
//		}
//	}
//	swap(a[R], a[pivot]);
//	cout << step++ << "번째: ";	// un-necessary part
//	arrPrint(a, SIZE);	// un-necessary part
//	return R;
//}
//
//void quickSort(int a[], int b, int e) {
//	if (b < e) {
//		int p = partition(a, b, e);	// divide
//		quickSort(a, b, p - 1);	// conquer
//		quickSort(a, p + 1, e);
//	}
//}
//
//// Merge Sort
//void merge(int a[], int b, int m, int e) {
//
//	// setting
//	int sorted[SIZE];
//	int i = b;
//	int j = m + 1;
//	int k = b;	// access a[b] ... a[e]
//
//	// main part
//	while ((i <= m) && (j <= e)) {
//		if (a[i] <= a[j]) {	// <= : stable
//			sorted[k] = a[i];
//			i++;
//		}
//		else {
//			sorted[k] = a[j];
//			j++;
//		}
//		k++;
//	}
//	if (i > m) {
//		while (j <= e) {
//			sorted[k] = a[j];
//			j++; k++;
//		}
//	}
//	else {
//		while (i <= m) {
//			sorted[k] = a[i];
//			i++; k++;
//		}
//	}
//
//	// a <- sorted
//	for (int t = b; t <= e; t++) {
//		a[t] = sorted[t];
//	}
//
//	cout << step2++ << "번째: ";	// un-necessary part
//	arrPrint(a, SIZE);	// un-necessary part
//}
//
//void mergeSort(int a[], int b, int e) {
//	if (b < e) {
//		int m = (b + e) / 2;
//		mergeSort(a, b, m);	// divide
//		mergeSort(a, m + 1, e);
//		merge(a, b, m, e);	// conquer & combine 
//	}
//}
//
//int main() {
//
//	int arr[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
//	cout << "<<<<<<<<<< Quick Sort >>>>>>>>>>\n";	// un-necessary part
//	cout << step++ << "번째: ";	// un-necessary part
//	arrPrint(arr, SIZE);	// un-necessary part
//	quickSort(arr, 0, SIZE - 1);
//	cout << endl;
//
//	int arr2[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
//	cout << "<<<<<<<<<< Merge Sort >>>>>>>>>>\n";	// un-necessary part
//	cout << step2++ << "번째: ";	// un-necessary part
//	arrPrint(arr2, SIZE);	// un-necessary part
//	mergeSort(arr2, 0, SIZE - 1);
//	cout << endl;
//
//	return 0;
//}