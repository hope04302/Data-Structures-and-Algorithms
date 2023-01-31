//#include <iostream>
//#define MAX 100
//
//using namespace std;
//
//int tree[MAX];
//int n;
//
//int makeTree(int arr[], int begin, int end, int node) {
//	
//	if (begin == end) {
//		tree[node] = arr[begin];
//	}
//	else {
//		int mid = (begin + end) / 2;
//		tree[node] = makeTree(arr, begin, mid, 2 * node) + makeTree(arr, mid + 1, end, 2 * node + 1);
//	}
//	return tree[node];
//}
//
//int treeSum(int begin, int end, int t_left, int t_right, int node) {
//	if (t_left < begin || t_right > end) {
//		return 0;
//	}
//	else if (begin <= t_left && t_right <= end) {
//		return tree[node];
//	}
//	int mid = (begin + end) / 2;
//	return treeSum(begin, mid, t_left, t_right, 2 * node) + treeSum(mid + 1, end, t_left, t_right, 2 * node + 1);
//}
//
//void change(int begin, int end, int f_add, int f_idx, int node) {
//
//	if (f_idx < begin || f_idx > end) { return; }
//
//	tree[node] += f_add;
//	if (begin == end) { return; }
//
//	int mid = (begin + end) / 2;
//	change(begin, mid, f_add, f_idx, 2 * node);
//	change(mid + 1, end, f_add, f_idx, 2 * node + 1);
//}
//
//int main() {
//
//	n = 12;
//	int arr[12] = {1, 9, 3, 8, 4, 5, 5, 9, 10, 3, 4, 5};
//	makeTree(arr, 0, 11, 1);
//
//	for (int i = 1; i < 32; i++) {
//		cout << tree[i] << " ";
//	}
//	return 0;
//}