/* 스택으로 역순 문자열 만들기 */

//#include <iostream>
//#include <vector>	// stack을 써도 되나, 편의상 vector로 대체
//
//using namespace std;
//
//int main() {
//	vector<char> stack;
//	string x;
//	cin >> x;
//	for (int i = 0; i < x.size(); i++) {
//		stack.push_back(x[i]);
//	}
//	while (stack.size() != 0) {
//		cout << stack.back();
//		stack.pop_back();
//	}
//	cout << endl;
//
//	return 0;
//}