//#include <iostream>
//
//using namespace std;
//
//int step;
//
//void binarySearch(int a[], int b, int e, int key) {
//
//	step++;
//	if (b == e) {
//		if (a[b] == key) {
//			cout << "���� �˻� ����! (" << key << ") --> ";
//			cout << step << "��° Ž�� ����!" << endl;
//		}
//		else {
//			cout << "���� �˻� ����! (" << key << ") --> ";
//			cout << step << "��° Ž�� ����!" << endl;
//		}
//		return;
//	}
//
//	int m = (b + e) / 2;
//	if (key == a[m]) {
//		cout << "���� �˻� ����! (" << key << ") --> ";
//		cout << step << "��° Ž�� ����!" << endl;
//	}
//	else if (key < a[m]) { binarySearch(a, b, m - 1, key); }
//	else if (key > a[m]) { binarySearch(a, m + 1, e, key); }
//	else {
//		cout << "���� �˻� ����! (" << key << ") --> ";
//		cout << step << "��° Ž�� ����!" << endl;
//	}
//
//}
//
//int main() {
//
//	int a[] = { 1, 2, 8, 9, 11, 19, 29 };
//	binarySearch(a, 0, 6, 11);
//	step = 0;
//	binarySearch(a, 0, 6, 7);
//	return 0;
//
//}