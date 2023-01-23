#include <iostream>

#ifndef __GraphMatrix__
#define __GraphMatrix__

#define MAX_VERTEX 30

using namespace std;

class Graph {

private:

	int size;
	int matrix[MAX_VERTEX][MAX_VERTEX];

public:

	Graph() {
		size = 0;
		for (int i = 0; i < MAX_VERTEX; i++) {
			for (int j = 0; j < MAX_VERTEX; j++) {
				matrix[i][j] = 0;
			}
		}
	}

	void insertVertex(int amount) {
		if (size + amount > MAX_VERTEX) { return; }
		size += amount;
	}
	
	void deleteVertex(int amount) {
		if (size - amount < 0) { return; }
		size -= amount;
	}

	void changeEdge(int row, int column, int weight = 1) {
		if (row >= size || column >= size) { return; }
		// non-weight graph ---> (weight -> <delete> or 1)
		matrix[row][column] = weight;
		// undirected graph --->
		// matrix[column][row] = weight;
	}

	void print() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
};

#endif // !__GraphMatrix__
