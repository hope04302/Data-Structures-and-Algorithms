//#include <iostream> // �̷� ã�⸦ ���� ���� Ʈ����...
//#include <vector>
//#include <stack>
//#define MAX 13
//
//using namespace std;
//
//vector<int> G[MAX] = {
//	{},
//	{2, 3},
//	{},
//	{4, 5},
//	{},
//	{6, 7},
//	{},
//	{8, 12},
//	{9, 10, 11},
//	{},
//	{},
//	{},
//	{}
//};
//
//void DFS(int root, int n, int T) {	// ����Լ��� ��� -> �� �����ϰ�...
//
//	cout << ">>>>>>>>>> DFS <<<<<<<<<<" << endl;
//
//	stack<int> stk;
//	bool vd[MAX]; fill_n(vd, n, 0);
//
//	stk.push(root);
//	vd[root] = 1;
//
//	while (!stk.empty()) {
//		int r = stk.top();
//		int i = 0;
//		while (i < G[r].size()) {
//			int j = G[r][i];
//			if (!vd[j]) {
//				stk.push(j);
//				vd[j] = 1;
//				printf("%d -> %d\n", r, j);
//				r = j;
//				i = 0;
//			}
//			else {
//				i++;
//			}
//			if (j == T) {
//				cout << "Ž�� ����!" << endl;
//				return;
//			}
//		}
//		stk.pop();
//	}
//
//	cout << "Ž�� ����!" << endl;
//}
//
//int main() {
//
//	DFS(1, 13, 12);
//	return 0;
//}