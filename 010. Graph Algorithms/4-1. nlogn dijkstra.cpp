//#include <iostream>
//#include <queue>
//#include <vector>
//#define p pair<int, int>
//#define MAX_SIZE 30
//#define INF 10000	// ����! �ʹ� �� �°�(ex. INT_MAX) -> ���� �÷� ���ɼ�...
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
//		// ���� ���� �ּ� �Ÿ��� �ִ� �� ����
//		int now = queue.top().first;
//		int now_w = queue.top().second;
//		queue.pop();
//		// ���� D[i] < now_w -> ���ķε� �� ������ ����
//		if (D[now] < now_w) { continue; }
//		for (int i = 0; i < n; i++) {
//			// ���� ���� �����ϸ�...
//			// ����: �̹� �ִܰŸ��� ���, �Ʒ� �� ���� �Ұ�
//			if (D[now] + G[now][i] < D[i]) {
//				D[i] = D[now] + G[now][i];
//				queue.push(make_pair(i, D[i]));	// ����� ����� ����(���� �� if�� ����)
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