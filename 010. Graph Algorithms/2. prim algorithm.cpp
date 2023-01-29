//#include <iostream>
//#include <queue>
//#include <climits>
//#define MAX_SIZE 30
//#define INF INT_MAX
//
//using namespace std;
//
//struct Vertex {
//	int ctd;	
//	int weight;
//};
//
//vector<Vertex> graph[MAX_SIZE];
//Vertex minist[MAX_SIZE];
//bool vertex[MAX_SIZE];
//
//int selectMin(int n) {
//	int min = 0;
//	while (vertex[min] == true) { min++; }
//	for (int i = min + 1; i < n; i++) {
//		if (vertex[i] == false && minist[i].weight < minist[min].weight) {
//			min = i;
//		}
//	}
//	vertex[min] = true;
//	return min;
//}
//
//void Prim(int n) {
//
//	Vertex deft = { -1, INF };
//	fill_n(vertex, n, false);
//	fill_n(minist, n, deft);
//
//	minist[0].weight = 0 ;
//
//	int now;
//	for (int i = 0; i < n; i++) {
//		now = selectMin(n);
//		vector<Vertex>::iterator j;
//		for (j = graph[now].begin(); j != graph[now].end(); j++) {
//			if (vertex[j->ctd] == false && j->weight < minist[j->ctd].weight) {
//				minist[j->ctd].weight = j->weight;
//				minist[j->ctd].ctd = now;
//			}
//		}
//	}
//}
//
//void insert(int i, int j, int w) {
//	graph[i].push_back({ j, w });
//	graph[j].push_back({ i, w });
//}
//
//int main() {
//
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
//	Prim(7);
//
//	for (int i = 1; i < 7; i++) {
//		cout << minist[i].weight << " ";
//		printf("[%d] -> [%d]\n", minist[i].ctd, i);
//	}
//
//	return 0;
//}