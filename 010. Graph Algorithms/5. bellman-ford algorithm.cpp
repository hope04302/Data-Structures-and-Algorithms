//// cf) 음의 cycle 확인: 1. n번 for 돌림 && 2. D[i][i] == 0?
//#include <iostream>
//#include <vector>
//#define MAX_SIZE 30
//#define INF 10000
//
//using namespace std;
//
//int G[MAX_SIZE][MAX_SIZE] = {
//	{0, 10, 5, INF, INF},
//	{INF, 0, 2, 1, INF},
//	{INF, -3, 0, 9, 2},
//	{INF, INF, INF, 0, -4},
//	{7, INF, INF, 6, 0}
//};
//int D[MAX_SIZE];
//
//void BellmanFord(int n, int x) {
//
//	fill_n(D, n, INF);
//	D[x] = 0;
//
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < n; k++) {
//				if (D[j] + G[j][k] < D[k]) {
//					D[k] = D[j] + G[j][k];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	BellmanFord(5, 0);
//	for (int i = 0; i < 5; i++) {
//		cout << D[i] << endl;
//	}
//	return 0;
//}