#include <iostream> // A* 알고리즘: 메모리 사용 높음
#include <queue>
#include <vector>
#define N 16
#define INF 99999999

using namespace std;

struct Path {
	int w;
	int v;
	int s;
};

// cf) sort: func '()' & <(오름차순), queue: operator & >(오름차순: front가 먼저 나옴)
struct cmp {
	bool operator() (Path a, Path b) {
		return a.w > b.w;
	}
};

int n;
int G[N][N];
int Gm[N];
priority_queue<Path, vector<Path>, cmp> que;

int TSP(int w, int v, int s) {

	int a_v;
	int a_w;
	
	if (v == -1) {
		cout << w << endl;
		return 0;
	}
	else if (v == (1 << n) - 1) {
		a_w = w - Gm[s]+ G[s][0];
		que.push({ a_w, -1, -1 });
	}
	else {
		for (int i = 0; i < n; i++) {
			if (!(v & (1 << i))) {
				a_v = v + (1 << i);
				a_w = w - Gm[s] + G[s][i];
				que.push({ a_w, a_v, i });
			}
		}
	}
	return 1;
}

void AAl() {
	int w = 0;
	int rep = 1;
	for (int i = 0; i < n; i++) {
		w += Gm[i];
	}
	que.push({ w, 1, 0 });
	while (rep) {
		Path now = que.top(); que.pop();
		rep = TSP(now.w, now.v, now.s);
	}
}

int main() {

	cin >> n;

	int temp = INF;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> G[i][j];
			if (G[i][j] == 0 && i != j) {
				G[i][j] = INF;
			}
			if (i != j && G[i][j] < temp) {
				temp = G[i][j];
			}
		}
		Gm[i] += temp;
		temp = INF;
	}

	AAl();
	return 0;
}