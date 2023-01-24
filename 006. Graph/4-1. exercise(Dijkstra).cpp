//#include <iostream>
//
//#define INF 10000
//#define MAX_VERTICES 6
//
//using namespace std;
//
//int weight[MAX_VERTICES][MAX_VERTICES]{
//	{0, 2, INF, 4, INF, INF},
//	{2, 0, 4, 4, 3, 1},
//	{INF, 4, 0, INF, INF, 5},
//	{4, 4, INF, 0, 2, INF},
//	{INF, 3, INF, 2, 0, 5},
//	{INF, 1, 5, INF, 5, 0}
//};
//
//int dist[MAX_VERTICES];
//bool S[MAX_VERTICES];
//
//int nextVertex(int size) {
//	int min = INF + 1;
//	int minPos = -1;
//	for (int i = 0; i < size; i++) {
//		if ((dist[i] < min) && !S[i]) {
//			min = dist[i];
//			minPos = i;
//		}
//	}
//	return minPos;
//}
//
//void printStep(int step, int size) {
//	cout << step << "th situation: " << endl;
//	cout << "{ ";
//	for (int i = 0; i < size; i++) {
//		if (S[i] == true) {
//			cout << i << " ";
//		}
//	}
//	cout << "}" << endl;
//	cout << "{ ";
//	for (int i = 0; i < size; i++) {
//		if (dist[i] == INF) {
//			cout << "* ";
//		}
//		else {
//			cout << dist[i] << " ";
//		}
//	}
//	cout << "}" << endl << endl;
//}
//
//void Dijkstra(int start, int size) {
//
//	int minPos;
//	int step = 0;
//
//	// set distance, S (1)
//	for (int i = 0; i < size; i++) {
//		dist[i] = weight[start][i];
//		S[i] = false;
//	}
//
//	// set distance, S (2)
//	S[start] = true;
//	dist[start] = 0;
//
//	printStep(step, size);
//
//	for (int i = 0; i < size - 1; i++) {
//
//		// find vertex which has shortest distance from current-vertex.
//		minPos = nextVertex(size);
//		S[minPos] = true;
//
//		for (int j = 0; j < size; j++) {
//			if (!S[j]) {
//				if (dist[minPos] + weight[minPos][j] < dist[j]) {
//					dist[j] = dist[minPos] + weight[minPos][j];
//				}
//			}
//		}
//
//		step++;
//		printStep(step, size);
//
//	}
//
//}
//
//int main() {
//
//	Dijkstra(0, MAX_VERTICES);
//	return 0;
//
//}