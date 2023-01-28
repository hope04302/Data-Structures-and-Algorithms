//#include <iostream>
//
//#define MAX(x, y) (x>y?x:y)
//#define SIZE 4
//
//using namespace std;
//
//int matrixPath(int arr[][SIZE + 1], int n) {
//
//	// arr[i][0] & arr[0][j]: 0으로 초기화(생략)
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			arr[i][j] += MAX(arr[i - 1][j], arr[i][j - 1]);
//		}
//	}
//
//	return arr[n][n];
//}
//
//int main() {
//
//	int arr[][SIZE + 1] = {
//		{0, 0, 0, 0, 0},
//		{0, 6, 7, 12, 5},
//		{0, 5, 3, 11, 18},
//		{0, 7, 17, 3, 3},
//		{0, 8, 10, 14, 9}
//	};
//
//	int path = matrixPath(arr, SIZE);
//	cout << path;
//	return 0;
//}