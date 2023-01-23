/* 컨테이너 이용법 간단 정리 */

//#include <iostream>
//#include <vector>	// (가변배열) & LIFO & Ordered Stack
//
//using namespace std;
//
//void printall(vector<int> v) {
//	cout << "{ ";
//	// cf) v.capacity() -> 할당된 크기를 리턴(2^n)
//	// vector<int>::size_type -> 원소 개수의 형식
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		// v.at(i) = v[i] (느리나 안정성 높음)
//		cout << v.at(i) << " ";
//	}
//	cout << "}" << endl;
//}
//
//void printall2(vector<int> v) {
//	cout << "{ ";
//	// vector<int>::iterator -> 반복자 형식
//	// v.begin(), v.end() <-> v.rbegin(), v.rend()
//	vector<int>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << " ";
//	}
//	cout << "}" << endl;
//}
//
//int main() {
//
//	vector<int> v1;			// v1 선언
//	vector<int> v2(5);		// v2 5칸 (0으로) 초기화
//	vector<int> v3(5, 2);	// v3 5칸 2로 초기화
//	vector<int> v4 = v3;	// v4에 v3 복제; vector<int> v4(v3);
//	vector<int> v5 = { 2, 5, 6 };
//							// v5에 넣음.
//	printall(v5);
//
//	v5.push_back(7);	// push_back (front는 없음)
//	printall(v5);
//
//	v5.pop_back();		// pop_back
//	printall(v5);
//
//	cout << v5.front() << endl;
//	cout << v5.back() << endl;
//
//	printall2(v5);
//
//	v5.insert(v5.begin() + 1, 3, 5);	// 1(iterator)번 위치에 3개(default=1)를 5로 넣음
//	printall(v5);
//
//	v5.assign(5, 2);	// 5개의 2(default=0)로 초기화
//
//	v5.resize(3, 5);	// 3개로 초기화(더 증가시 5(default=0)으로 초기화) 
//
//	v5.reserve(3);	// size=3으로 미리 할당
//
//	v5.clear();	// 초기화(size=0, capacity: 그대로)
//
//	// v5.swap(...)
//
//
//	/*
//	string도 비슷한 메서드 가짐,
//	대신 swap(s1, s2), substr(1, 2), erase(1, 2), append(), find(), replace() 등등...,
//	at, assign, insert, push_back, pop_back 등등도 있음.
//	*/
//	/*
//	list도 비슷, (double linked list)
//	remove(), remove_if, "sort" 등등..
//	*/
//	/*
//	algorithm
//	-> sort, stable_sort, partial_sort
//	-> (vector) remove(begin, end, num), remove_if, 람다함수, transform(begin, end, save's begin, pred)
//	*/
//	//이외에 set(key들), multiset(key=value), map, multimap(mm['a'] = b;)
//	//stack(top, push, pop, ...), queue(push, pop, ...), deque, priority_queue...
// 
// 
//	return 0;
//}