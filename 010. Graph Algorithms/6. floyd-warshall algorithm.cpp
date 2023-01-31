//#include <iostream>
//#define MAX_SIZE 30
//#define INF 10000
//
//using namespace std;
//
//int G[MAX_SIZE][MAX_SIZE] = {
//	{0, 10, 5, INF, INF},
//	{INF, 0, 2, 1, INF},
//	{INF, 3, 0, 9, 2},
//	{INF, INF, INF, 0, 4},
//	{7, INF, INF, 6, 0}
//};
//
//void Floyd(int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < n; k++) {
//				if (G[j][k] > G[j][i] + G[i][k]) {
//					G[j][k] = G[j][i] + G[i][k];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	Floyd(5);
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << G[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}