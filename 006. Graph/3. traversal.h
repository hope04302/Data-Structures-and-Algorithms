#include <iostream>
#include <vector>
#include <queue>

#ifndef __Traversal__
#define __Traversal__

#define MAX_VERTEX 30

using namespace std;

class TraversalGraph {

private:

	struct Node {
		int vertex;
		Node* link;
	};

	int size;
	Node* list[MAX_VERTEX];

	bool visited[MAX_VERTEX];
	vector<int> stack;
	queue<int> queue;

public:

	TraversalGraph() {
		size = 0;
		for (int i = 0; i < MAX_VERTEX; i++) {
			list[i] = NULL;
			visited[i] = false;
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

	void clean_visited() {
		for (int i = 0; i < MAX_VERTEX; i++) {
			visited[i] = false;
		}
	}

	void DFS(int v) {

		clean_visited();

		int now_v = v;
		int next_v;
		Node* next;

		// visit now_v(=v) necessarily
		stack.push_back(now_v);
		visited[now_v] = true;
		cout << now_v;

		// until stack is empty
		while (!stack.empty()) {

			// basic setting to search next vertex
			next = list[now_v];

			// 1. search all edges deeply.
			while (next) {

				next_v = next->vertex;

				// 1 - 1. if we aren't visited -> move to non-visited vertex
				if (!visited[next_v]) {

					stack.push_back(next_v);
					visited[next_v] = true;
					cout << " " << next_v;

					now_v = next_v;
					next = list[now_v];
				}

				// 1 - 2. if we visited -> check next vertex.
				else { next = next->link; }

			}

			// 2. if we have no choice to move -> go back
			now_v = stack.back();
			stack.pop_back();

		}
	}

	void BFS(int v) {

		clean_visited();

		int now_v = v;
		int next_v;
		Node* next;

		// visit now_v(=v) necessarily
		queue.push(now_v);
		visited[now_v] = true;
		cout << now_v;

		// until queue is empty
		while (!queue.empty()) {

			// 1. pop start vertex from queue
			now_v = queue.front();
			queue.pop();

			// basic setting to search next vertex
			next = list[now_v];

			// 2. search all edges breadthly.
			while (next) {

				next_v = next->vertex;

				// 2 - 1. if we aren't visited -> check for next move.
				if (!visited[next_v]) {

					queue.push(next_v);
					visited[next_v] = true;
					cout << " " << next_v;
				}

				// 2 - 2. check another adjacent vertices.
				next = next->link;

			} 

		}

	}

};

#endif