//#include <iostream>
//#define SIZE 8
//#define MAX2(x, y) (x>y?x:y)
//#define MAX3(x, y, z) (MAX2(MAX2(x, y),z))
//#define MAX4(x, y, z, w) (MAX2(MAX2(x, y), MAX2(z, w)))
//
//using namespace std;
//
//int arr[4][SIZE];
//
//int pebble(int a[][SIZE], int n) {
//
//	arr[0][0] = a[0][0];
//	arr[1][0] = a[1][0];
//	arr[2][0] = a[2][0];
//	arr[3][0] = a[0][0] + a[2][0];
//	for (int j = 1; j < n; j++) {
//		arr[0][j] = a[0][j] + MAX2(arr[1][j - 1], arr[2][j - 1]);
//		arr[1][j] = a[1][j] + MAX3(arr[0][j - 1], arr[2][j - 1], arr[3][j - 1]);
//		arr[2][j] = a[2][j] + MAX2(arr[0][j - 1], arr[1][j - 1]);
//		arr[3][j] = a[0][j] + a[2][j] + arr[1][j - 1];
//	}
//	return MAX4(arr[0][n - 1], arr[1][n - 1], arr[2][n - 1], arr[3][n - 1]);
//}
//
//int main() {
//	int arr[][SIZE] = {
//		{6, 7, 12,-5,5,3,11,3},
//		{-8, 10, 14,9,7,13,8,5},
//		{11,12,7,4,8,-2,9,4}
//	};
//	int n = 2;
//	int cho = pebble(arr, n);
//	cout << cho << endl;
//	return 0;
//}