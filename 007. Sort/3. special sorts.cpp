#include <iostream>
#include <queue>

#define SIZE 8
#define RADIX 10
#define DIGIT 2

using namespace std;

int step, step2, step3;
int counting[RADIX];

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void arrPrint(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d ", a[i]);
	}
	cout << endl;
}

// Shell Sort
void intervalSort(int a[], int b, int e, int h) {
	int temp, idx;
	for (int i = b + h; i <= e; i += h) {
		temp = a[i];
		idx = i;
		while ((idx > b) && (a[idx - h] > temp)) {
			a[idx] = a[idx - h];
			idx -= h;
		}
		a[idx] = temp;
	}
}

void shellSort(int a[], int n) {
	cout << "<<<<<<<<<< Shell Sort >>>>>>>>>>\n";	// un-necessary part
	cout << step++ << "번째: ";	// un-necessary part
	arrPrint(a, n);	// un-necessary part
	
	int h = n / 2;
	while (h >= 1) {
		for (int i = 0; i < h; i++) {
			intervalSort(a, i, n - 1, h);
		}
		h /= 2;
		cout << step++ << "번째: ";	// un-necessary part
		arrPrint(a, n);	// un-necessary part
	}
}

// Radix Sort
void radixSort(int a[], int n) {

	cout << "<<<<<<<<<< Radix Sort >>>>>>>>>>\n";	// un-necessary part
	cout << step2++ << "번째: ";	// un-necessary part
	arrPrint(a, n);	// un-necessary part

	int factor = 1;
	queue<int> qu[RADIX];

	for (int i = 0; i < DIGIT; i++) {
		for (int j = 0; j < n; j++) {
			qu[(a[j] / factor) % 10].push(a[j]);
		}
		int k = 0;
		for (int j = 0; j < RADIX; j++) {
			for (; !qu[j].empty(); k++) {
				a[k] = qu[j].front();
				qu[j].pop();
			}
		}
		factor *= 10;
		cout << step2++ << "번째: ";	// un-necessary part
		arrPrint(a, n);	// un-necessary part
	}

}

// Counting Sort
void countingSort(int a[], int n) {

	cout << "<<<<<<<<<< Counting Sort >>>>>>>>>>\n";	// un-necessary part
	cout << step3++ << "번째: ";	// un-necessary part
	arrPrint(a, n);	// un-necessary part

	for (int i = 0; i < n; i++) {
		counting[a[i]]++;
	}

	for (int i = 1; i < RADIX; i++) {
		counting[i] += counting[i - 1];
	}

	int j = 0;
	for(int i = 0; i < RADIX; i++) {
		while (counting[i] > j) {
			a[j] = i;
			j++;
		}
	}

	cout << step3++ << "번째: ";	// un-necessary part
	arrPrint(a, n);	// un-necessary part

}

int main() {

	int arr[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	shellSort(arr, SIZE);
	cout << endl;

	int arr2[SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	radixSort(arr2, SIZE);
	cout << endl;

	int arr3[] = { 2, 5, 0, 1, 4, 3, 2, 5, 6, 9, 8, 1 };
	countingSort(arr3, 12);
	cout << endl;

	return 0;
}