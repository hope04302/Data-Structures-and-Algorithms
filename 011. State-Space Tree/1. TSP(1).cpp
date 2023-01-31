//#include <iostream>	// 재귀함수 호출을 통한 기초적인 구현
//#include <cmath>
//#define MAX_SIZE 16
//#define INF 99999999
//
//using namespace std;
//
//int G[MAX_SIZE][MAX_SIZE] = {
//	{0, 10, 10, 30, 25},
//	{10, 0, 14, 21, 10},
//	{10, 18, 0, 7, 9},
//	{8, 11, 7, 0, 3},
//	{14, 10, 10, 3, 0}
//};
//
//int start;
//
//int TSP(int vd, int n, int s) {
//
//	vd += (1 << s);
//
//	if (vd == (1 << n) - 1) {
//		return G[s][start];
//	}
//
//	int min = INF;
//	int temp;
//	int temp_vd = vd;
//
//	for (int i = 0; i < n; i++) {
//		if (temp_vd % 2 == 0) {
//			temp = TSP(vd, n, i) + G[s][i];
//			if (temp < min) {
//				min = temp;
//			}
//		}
//		temp_vd >>= 1;
//	}
//	return min;
//
//}
//
//int main() {
//
//	start = 1;
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> G[i][j];
//			if (G[i][j] == 0 && i != j) {
//				G[i][j] = INF;
//			}
//		}
//	}
//	cout << TSP(0, n, 0);
//	return 0;
//}