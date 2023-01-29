//// Topological Sorting -> (생략)
//// 1. find & remove
//// 2. DFS application (after[ft->bk] -> before)
//#include <iostream>
//#define MAX_SIZE 30
//#define INF 10000	// 주의! 너무 딱 맞게(ex. INT_MAX) -> 오버 플로 가능성...
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
//int D[MAX_SIZE];
//int S[MAX_SIZE];
//
//int min(int n) {
//	int min_idx = -1;
//	int min = INF;
//	for (int i = 0; i < n; i++) {
//		if (S[i] == 0 && D[i] < min) {
//			min = D[i];
//			min_idx = i;
//		}
//	}
//	return min_idx;
//}
//
//void dijkstra(int n, int x) {
//	
//	// default
//	for (int i = 0; i < n; i++) {
//		D[i] = G[x][i];
//	}
//	S[x] = 1;
//
//	int k;
//	for (int i = 0; i < n - 1; i++) {
//		k = min(n);
//		S[k] = 1;
//		for (int j = 0; j < n; j++) {
//			if (S[j] == 0) {
//				if (D[k] + G[k][j] < D[j]) {
//					D[j] = D[k] + G[k][j];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	dijkstra(5, 0);
//	for (int i = 0; i < 5; i++) {
//		cout << D[i] << endl;
//	}
//	return 0;
//}