/* �����̳� �̿�� ���� ���� */

//#include <iostream>
//#include <vector>	// (�����迭) & LIFO & Ordered Stack
//
//using namespace std;
//
//void printall(vector<int> v) {
//	cout << "{ ";
//	// cf) v.capacity() -> �Ҵ�� ũ�⸦ ����(2^n)
//	// vector<int>::size_type -> ���� ������ ����
//	for (vector<int>::size_type i = 0; i < v.size(); i++) {
//		// v.at(i) = v[i] (������ ������ ����)
//		cout << v.at(i) << " ";
//	}
//	cout << "}" << endl;
//}
//
//void printall2(vector<int> v) {
//	cout << "{ ";
//	// vector<int>::iterator -> �ݺ��� ����
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
//	vector<int> v1;			// v1 ����
//	vector<int> v2(5);		// v2 5ĭ (0����) �ʱ�ȭ
//	vector<int> v3(5, 2);	// v3 5ĭ 2�� �ʱ�ȭ
//	vector<int> v4 = v3;	// v4�� v3 ����; vector<int> v4(v3);
//	vector<int> v5 = { 2, 5, 6 };
//							// v5�� ����.
//	printall(v5);
//
//	v5.push_back(7);	// push_back (front�� ����)
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
//	v5.insert(v5.begin() + 1, 3, 5);	// 1(iterator)�� ��ġ�� 3��(default=1)�� 5�� ����
//	printall(v5);
//
//	v5.assign(5, 2);	// 5���� 2(default=0)�� �ʱ�ȭ
//
//	v5.resize(3, 5);	// 3���� �ʱ�ȭ(�� ������ 5(default=0)���� �ʱ�ȭ) 
//
//	v5.reserve(3);	// size=3���� �̸� �Ҵ�
//
//	v5.clear();	// �ʱ�ȭ(size=0, capacity: �״��)
//
//	// v5.swap(...)
//
//
//	/*
//	string�� ����� �޼��� ����,
//	��� swap(s1, s2), substr(1, 2), erase(1, 2), append(), find(), replace() ���...,
//	at, assign, insert, push_back, pop_back �� ����.
//	*/
//	/*
//	list�� ���, (double linked list)
//	remove(), remove_if, "sort" ���..
//	*/
//	/*
//	algorithm
//	-> sort, stable_sort, partial_sort
//	-> (vector) remove(begin, end, num), remove_if, �����Լ�, transform(begin, end, save's begin, pred)
//	*/
//	//�̿ܿ� set(key��), multiset(key=value), map, multimap(mm['a'] = b;)
//	//stack(top, push, pop, ...), queue(push, pop, ...), deque, priority_queue...
// 
// 
//	return 0;
//}