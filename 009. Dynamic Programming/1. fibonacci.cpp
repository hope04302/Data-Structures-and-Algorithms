//#include <iostream>
//#define MAX 1000
//
//using namespace std;
//
//// cf) vector<pair<int, int>> temp; temp.push_back(make_pair(1, 2)); 로 사용하기도...
//// cf) temp[].first와 같이 접근
//// vector<int> arr;
//int arr[MAX];
//
//int fibonacci(int n) {
//	if (n == 0 || arr[n] != 0) {
//		return arr[n];
//	}
//	else {
//		arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
//		return arr[n];
//	}
//}
//
//int main() {
//
//	// default
//	arr[1] = 1;
//
//	for (int i = 1; i <= 20; i++) {
//		int fibo = fibonacci(i);
//		cout << fibo << endl;
//	}
//
//	return 0;
//}