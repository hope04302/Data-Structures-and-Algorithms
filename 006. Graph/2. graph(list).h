#include <iostream>

#ifndef __GraphList__
#define __GraphList__

#define MAX_VERTEX 30

using namespace std;

class Graph {

protected:

	struct Node {
		int vertex;
		Node* link;
	};

	int size;
	Node* list[MAX_VERTEX];

public:

	Graph() {
		size = 0;
		for (int i = 0; i < MAX_VERTEX; i++) {
			list[i] = NULL;
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

	void insertEdge(int s, int e) {
		if (s >= size || e >= size) { return; }

		Node* temp = list[s];
		while (temp) {
			if (temp->vertex == e) { return; }
			temp = temp->link;
		}

		Node* newNode = new Node;
		newNode->vertex = e;
		newNode->link = list[s];
		list[s] = newNode;
	}

	void deleteEdge(int s, int e) {
		Node* check_parent = NULL;
		Node* check = list[s];
		while (check) {
			if (check->vertex == e) {
				if (check_parent == NULL) { list[s] = check->link; }
				else { check_parent->link = check->link; }
				delete check;
				return;
			}
			check_parent = check;
			check = check->link;
		}
	}

	void print() {
		for (int i = 0; i < size; i++) {
			Node* temp = list[i];
			cout << "[" << i << "] ";
			while (temp) {
				cout << temp->vertex << " ";
				temp = temp->link;
			}
			cout << endl;
		}
	}

};

#endif // !__GraphList__