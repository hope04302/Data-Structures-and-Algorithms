//#include <iostream> // (DP)를 이용한 개선된 탐색
//#define N 16
//#define CN 15
//#define INF 99999999
//
//using namespace std;
//
//int n, cn;
//
//int G[N][N];
//
//int vd[CN][1 << CN];
//
//int TSP_div(int i, int j) {
//	int min = INF;
//	int fj = j ^ (1 << i);
//	if (fj == 0) {
//		return G[n - 1][i];
//	}
//	for (int fi = 0; fi < cn; fi++) {
//		if ((fj & (1 << fi)) != 0 && vd[fi][fj] + G[fi][i] < min) {
//			min = vd[fi][fj] + G[fi][i];
//		}
//	}
//	return min;
//}
//
//int TSP() {
//
//	for (int j = 1; j < (1 << cn); j++) {
//		for (int i = 0; i < cn; i++) {
//			if ((j & (1 << i)) != 0) {
//				vd[i][j] = TSP_div(i, j);
//			}
//		}
//	}
//
//	int min = INF;
//	for (int i = 0; i < cn; i++) {
//		if (vd[i][(1 << cn) - 1] + G[i][n - 1] < min) {
//			min = vd[i][(1 << cn) - 1] + G[i][n - 1];
//		}
//	}
//
//	return min;
//
//}
//
//int main() {
//
//	cin >> n;
//	cn = n - 1;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> G[i][j];
//			if (G[i][j] == 0 && i != j) {
//				G[i][j] = INF;
//			}
//		}
//	}
//
//	cout << TSP();
//
//	return 0;
//}