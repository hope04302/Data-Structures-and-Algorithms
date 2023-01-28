//#include <iostream>
//#include <climits>
//#define SIZE 500
//
//using namespace std;
//
//int matrix[SIZE][SIZE];
//int p[SIZE + 1];
//
//int min(int b, int e) {
//	int sml = INT_MAX;
//	for (int i = b; i < e; i++) {
//		int gap = matrix[b][i] + matrix[i + 1][e] + p[b] * p[i + 1] * p[e + 1];
//		if (gap < sml) { sml = gap; }
//	}
//	return sml;
//}
//
//int matrixChain(int n) {
//
//	// matrix[i][i] = 0으로...(생략)
//	for (int r = 1; r < n; r++) {
//		for (int i = 0; i < n - r; i++) {
//			matrix[i][i + r] = min(i, i + r);
//		}
//	}
//	return matrix[0][n - 1];
//
//}
//
//int main() {
//
//	int n = 0;
//	cin >> n;
//
//	int trash;
//
//	cin >> p[0] >> p[1];
//	for (int i = 2; i <= n; i++) {
//		cin >> trash >> p[i];
//	}
//
//	cout << matrixChain(n);
//	return 0;
//}