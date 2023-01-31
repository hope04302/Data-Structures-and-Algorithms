//#include <iostream>
//#include <vector>
//#define MAX 6
//
//using namespace std;
//
//vector<int> G[MAX];
//int total;
//
//void BFS(int n, int s, int c[]) {
//
//	for (int i = 0; i < G[s].size(); i++) {
//		if (c[s] == c[G[s][i]]) { return; }
//	}
//	if (s == n - 1) {
//		total++;
//		cout << total << " : ";
//		for (int i = 0; i < n; i++) {
//			cout << c[i] << ' ';
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 0; i <= s + 1; i++) {
//		c[s + 1] = i;
//		BFS(n, s + 1, c);
//	}
//}
//
//void insert(int i, int j) {
//	G[i].push_back(j);
//	G[j].push_back(i);
//}
//
//int main() {
//
//	insert(1, 2);
//	insert(1, 3);
//	insert(1, 4);
//	insert(1, 0);
//	insert(2, 5);
//	insert(2, 0);
//	insert(3, 6);
//	insert(4, 5);
//	insert(4, 0);
//	insert(5, 0);
//
//	int v[MAX]; fill_n(v, MAX, -1);
//	v[0] = 0;
//	BFS(6, 0, v);
//
//	cout << total;
//
//	return 0;
//}