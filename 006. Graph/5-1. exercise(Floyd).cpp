#include <iostream>

#define INF 10000
#define MAX_VERTICES 6

using namespace std;

int weight[MAX_VERTICES][MAX_VERTICES]{
	{0, 2, INF, 4, INF, INF},
	{2, 0, 4, 4, 3, 1},
	{INF, 4, 0, INF, INF, 5},
	{4, 4, INF, 0, 2, INF},
	{INF, 3, INF, 2, 0, 5},
	{INF, 1, 5, INF, 5, 0}
};

int A[MAX_VERTICES][MAX_VERTICES];

void printStep(int step, int size) {
	cout << step << "th situation:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (A[i][j] == INF) {
				cout << "* ";
			}
			else {
				cout << A[i][j] << " ";
			}
		}
		cout << endl << endl;
	}
}

void Floyd(int size) {

	int step = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			A[i][j] = weight[i][j];
		}
	}

	printStep(step, size);

	for (int k = 0; k < size; k++) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (A[i][j] > A[i][k] + A[k][j]) {
					A[i][j] = A[i][k] + A[k][j];
				}
			}
		}
		step++;
		printStep(step, size);
	}
}

int main() {

	Floyd(MAX_VERTICES);
	return 0;
}