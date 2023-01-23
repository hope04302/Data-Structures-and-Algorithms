#include <iostream>
#include <vector>
#include "2. graph(list).h"

#ifndef __Traversal__
#define __Traversal__

class TraversalGraph : Graph {

private:

	bool visited[MAX_VERTEX];
	vector<int> stack;

public:

	TraversalGraph() {
		size = 0;
		for (int i = 0; i < MAX_VERTEX; i++) {
			list[i] = NULL;
			visited[i] = false;
		}
	}

	void DFS(int v) {	// continue

		Node* next;
		int next_v;
		int now_v = v;

		stack.push_back(now_v);
		visited[now_v] = v;

		cout << v;

		while (!stack.empty()) {

			next = list[now_v];
			next_v = next->vertex;

			while (next) {

				if (!visited[next_v]) {
					stack.push_back(next_v);
					visited[next_v] = true;
					cout << " " << next_v;
					now_v = next_v;
					next = list[now_v];
				}

				else { next = next->link; }

			}

			v = stack.back();
			stack.pop_back();

		}
	}
};

#endif