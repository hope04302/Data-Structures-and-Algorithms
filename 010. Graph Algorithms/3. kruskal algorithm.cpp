//#include <iostream>
//#include <vector>
//#include <queue>
//#define MAX_SIZE 30
//
//using namespace std;
//
//struct Vertex {
//	int v1;
//	int v2;
//	int w;
//};
//
//struct cmp {
//	bool operator()(Vertex a, Vertex b) {
//		return a.w > b.w;
//	}
//};
//
//priority_queue<Vertex, vector<Vertex>, cmp> graph;
//int parent[MAX_SIZE];
//
///*
//isCycle 판단:
//union & find
//*/
//bool isCycle(int i, int j) {
//	if (parent[i] == parent[j]) { return true; }
//	else { return false; }
//}
//
//int getParent(int x) {
//	if (parent[x] == x) { return x; }
//	else { return parent[x] = getParent(parent[x]); }
//}
//
//void unionSet(int a, int b) {
//	a = getParent(a);
//	b = getParent(b);
//	if (a > b) { parent[a] = b; }
//	else { parent[b] = a; }
//}
//
//void Kruskal(int n) {
//
//	// 초기화
//	for (int i = 0; i < MAX_SIZE; i++) {
//		parent[i] = i;
//	}
//
//	int i = 0;
//	Vertex temp;
//	while (i < n - 1) {
//		temp = graph.top(); graph.pop();	// top임에 주의
//		if (!isCycle(temp.v1, temp.v2)) {
//			unionSet(temp.v1, temp.v2);
//			printf("%d -> %d [%d]\n", temp.v1, temp.v2, temp.w);
//			i++;
//		}
//	}
//}
//
//void insert(int v1, int v2, int w) {
//	graph.push({ v1, v2, w });
//}
//
//int main() {
//	insert(1, 2, 3);
//	insert(1, 3, 17);
//	insert(1, 4, 6);
//	insert(2, 4, 5);
//	insert(2, 0, 12);
//	insert(3, 5, 10);
//	insert(3, 6, 8);
//	insert(4, 5, 9);
//	insert(5, 6, 4);
//	insert(5, 0, 2);
//	insert(6, 0, 14);
//
//	Kruskal(7);
//
//	return 0;
//}