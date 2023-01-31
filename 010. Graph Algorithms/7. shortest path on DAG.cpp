//#include <iostream>
//#include <vector>
//#include <stack>
//#define MAX_SIZE 30
//#define INF 10000
//#define p pair<int, int>
//#define m(v, w) make_pair(v, w)
//
//using namespace std;
//
//vector<p> G[MAX_SIZE] = {
//	{m(1, 7), m(2, 3), m(3, 5)},
//	{m(3, 1), m(5, -2)},
//	{m(5, 4)},
//	{},
//	{m(0, 6), m(1, 1)},
//	{m(3, -3)}
//};
//int visited[MAX_SIZE];
//stack<int> check;
//stack<int> all;
//
//void DFS(int n, int s) {
//
//	visited[s] = 1;
//	check.push(s);
//	
//	int targ = s;
//	int i, v;
//	while (!check.empty()) {
//		targ = check.top();
//		i = 0;
//		while (i < G[targ].size()) {
//			v = G[targ][i].first;
//			if (visited[v] == 0) {
//				visited[v] = 1;
//				check.push(v);
//				targ = v;
//				i = 0;
//			}
//			else { i++; }
//		}
//		all.push(targ);
//		check.pop();
//	}
//}
//
//void Sort(int n) {
//	for (int i = 0; i < n; i++) {
//		if (visited[i] == 0) {
//			DFS(n, i);
//		}
//		while (!check.empty()) {
//			check.pop();
//		}
//	}
//}
//
//void DAGShortestPath(int n, int x) {
//
//	int dist[MAX_SIZE];
//	fill_n(dist, n, INF);
//	dist[x] = 0;
//
//	while (!all.empty()) {
//		int a = all.top();
//		all.pop();
//		for (int i = 0; i < G[a].size(); i++) {
//			if (dist[a] + G[a][i].second < dist[G[a][i].first]) {
//				dist[G[a][i].first] = dist[a] + G[a][i].second;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << dist[i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	Sort(6);
//	DAGShortestPath(6, 0);
//	return 0;
//}