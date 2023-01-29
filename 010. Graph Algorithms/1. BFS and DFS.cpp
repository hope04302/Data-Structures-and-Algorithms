//#include <iostream>
//#include <stack>
//#include <queue>
//
//#define MAX_SIZE 30
//
//using namespace std;
//
//int graph[MAX_SIZE][MAX_SIZE];
//
//void BFS(int n, int s) {
//	// 필요한 자료
//	bool* visited = new bool[n]; fill_n(visited, n, false);
//	queue<int> check;
//
//	visited[s] = true;
//	check.push(s);
//	cout << s << " ";
//
//	while (!check.empty()) {
//		int parn = check.front(); check.pop();
//		for (int i = 0; i < n; i++) {
//			if ((graph[parn][i] != 0) && (visited[i] == false)) {
//				visited[i] = true;
//				check.push(i);
//				cout << i << " ";
//			}
//		}
//	}
//
//	cout << endl;
//}
//
//void DFS(int n, int s) {
//
//	bool* visited = new bool[n]; fill_n(visited, n, false);
//	stack<int> check;
//
//	visited[s] = true;
//	check.push(s);
//	cout << s << " ";
//	
//	int targ = s;
//	int i;
//	while (!check.empty()) {
//		i = 0;
//		while (i < n) {
//			if ((graph[targ][i] != 0) && (visited[i] == false)) {
//				visited[i] = true;
//				check.push(i);
//				targ = i;
//				i = 0;
//				cout << targ << " ";
//			}
//			else { i++; }
//		}
//		targ = check.top(); check.pop();
//	}
//	cout << endl;
//}
//
//void insert(int i, int j) {
//	graph[i][j] = 1;
//	graph[j][i] = 1;
//}
//
//int main() {
//
//	insert(1, 2);
//	insert(1, 3);
//	insert(2, 4);
//	insert(2, 5);
//	insert(3, 5);
//	insert(4, 0);
//	insert(5, 0);
//	insert(0, 6);
//
//	BFS(7, 1);
//	DFS(7, 1);
//
//	return 0;
//}