//#include <iostream>
//
//#define MAX(x, y) (x>y?x:y)
//#define SIZE 4
//
//using namespace std;
//
//int matrixPath(int arr[][SIZE], int i, int j) {
//
//	if (i == -1 || j == -1) {
//		return 0;
//	}
//	else {
//		return arr[i][j] + MAX(matrixPath(arr, i - 1, j), matrixPath(arr, i, j - 1));
//	}
//
//}
//
//int main() {
//
//	int arr[][SIZE] = {
//		{6, 7, 12, 5},
//		{5, 3, 11, 18},
//		{7, 17, 3, 3},
//		{8, 10, 14, 9}
//	};
//
//	int path = matrixPath(arr, SIZE - 1, SIZE - 1);
//	cout << path;
//	return 0;
//}