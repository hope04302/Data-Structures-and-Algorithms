//#include <iostream>
//
//using namespace std;
//
//// not sorted data
//void sequentialSearch(int a[], int n, int key) {
//	int i = 0;
//	cout << "순차 검색 시작! (" << key << ") --> ";
//	while (i < n && a[i] != key) { i++; }
//	if (a[i] == key) { cout << i + 1 << "번째 탐색 성공!" << endl; }
//	else { cout << i + 1 << "번째 탐색 실패!" << endl; }
//}
//
//// sorted data
//void sequentialSearch2(int a[], int n, int key) {
//	int i = 0;
//	cout << "순차 검색 시작! (" << key << ") --> ";
//	while (i < n && a[i] < key) { i++; }
//	if (a[i] == key) { cout << i + 1 << "번째 탐색 성공!" << endl; }
//	else { cout << i + 1 << "번째 탐색 실패!" << endl; }
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int a[] = { 8, 30, 1, 9, 11, 19, 2 };
//	sequentialSearch(a, 7, 11);
//	sequentialSearch(a, 7, 20);
//
//	int a2[] = { 1, 2, 8, 9, 11, 19, 29 };
//	sequentialSearch2(a2, 7, 11);
//	sequentialSearch2(a2, 7, 20);
//
//	return 0;
//}