//#include <iostream>
//
//#define INDEX_SIZE 3
//
//using namespace std;
//
//// sorted data & index table
//
//struct iTable {
//	int index;
//	int key;
//};
//
//iTable indexTable[INDEX_SIZE];
//
//void createIndexTable(int a[], int n) {
//	int idx = (n - 1) / (INDEX_SIZE - 1);
//	for (int i = 0; i < INDEX_SIZE; i++) {
//		indexTable[i].index = i * idx;
//		indexTable[i].key = a[i * idx];
//	}
//}
//
//void indexSearch(int a[], int n, int key) {
//
//	if (key < a[0] || key > a[n - 1]) {
//		cout << "순차 검색 실패! (" << key << ")" << endl;
//		return;
//	}
//
//	int i;
//	for (i = 0; i < INDEX_SIZE; i++) {
//		// i = INDEX_SIZE - 1일 땐 전자만 실행되므로 오류 없음
//		if ((indexTable[i].key <= key) && (indexTable[i + 1].key > key)) {
//			// sequential search of sorted data 
//			int j = indexTable[i].index;
//			cout << "순차 검색 시작! (" << key << ") --> ";
//			while (j < indexTable[i + 1].index && a[j] < key) { j++; }
//			if (a[j] == key) { cout << j + 1 << "번째 탐색 성공!" << endl; }
//			else { cout << j + 1 << "번째 탐색 실패!" << endl; }
//		}
//	}
//
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int a[] = { 1, 2, 8, 9, 11, 19, 29 };
//
//	createIndexTable(a, 7);
//	indexSearch(a, 7, 11);
//	indexSearch(a, 7, 7);
//	indexSearch(a, 7, 31);
//
//	return 0;
//}