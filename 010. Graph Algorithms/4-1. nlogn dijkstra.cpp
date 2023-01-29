//#include <iostream>
//#include <queue>
//#include <vector>
//#define p pair<int, int>
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
//
//struct cmp {
//	bool operator()(p a, p b) {
//		return a.second > b.second;
//	}
//};
//
//void dijkstra(int n, int x) {
//	
//	// default
//	for (int i = 0; i < n; i++) {
//		D[i] = INF;
//	}
//	D[x] = 0;
//
//	priority_queue<p, vector<p>, cmp> queue;
//	queue.push(make_pair(x, 0));
//	
//	while (!queue.empty()) {
//		// 현재 기준 최소 거리에 있는 놈 포착
//		int now = queue.top().first;
//		int now_w = queue.top().second;
//		queue.pop();
//		// 만약 D[i] < now_w -> 이후로도 다 쓰레기 정보
//		if (D[now] < now_w) { continue; }
//		for (int i = 0; i < n; i++) {
//			// 만약 단축 가능하면...
//			// 참고: 이미 최단거리인 경우, 아래 식 성립 불가
//			if (D[now] + G[now][i] < D[i]) {
//				D[i] = D[now] + G[now][i];
//				queue.push(make_pair(i, D[i]));	// 단축된 결과로 투입(기존 건 if로 무시)
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