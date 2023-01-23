/*
prefix - infix - postfix
���� ǥ���(postfix notation)�� �̿��� ���
��, �� �ڸ� ���� ��� ����
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ��, ((6/4)-(3/2)) ������ �ĸ� ��ȯ ����
string in2post(string in) {
	vector<char> oprt;
	string post;
	char word;
	for (int i = 0; i < in.size(); i++) {
		word = in[i];
		if ('0' <= word && word <= '9') {
			post += word;
		}
		else if (word == '+' || word == '-' || word == '*' || word == '/') {
			oprt.push_back(word);
		}
		else if (word == ')') {
			post += oprt.back();
			oprt.pop_back();
		}
	}
	return post;
}

float calculate(string post) {
	vector<float> nums;
	char word;
	for (int i = 0; i < post.size(); i++) {
		word = post[i];
		if (word == '+' || word == '-' || word == '*' || word == '/') {
			float a = nums.back();
			nums.pop_back();
			float b = nums.back();
			nums.pop_back();
			float sum;
			if (word == '+') {
				sum = b + a;
			}
			else if (word == '-') {
				sum = b - a;
			}
			else if (word == '*') {
				sum = b * a;
			}
			else {
				sum = b / a;
			}
			nums.push_back(sum);
		}
		else {
			nums.push_back(float(word - '0'));
		}
	}
	return nums.back();
}

int main() {

	string math_exp;
	cin >> math_exp;

	string math_exp_post = in2post(math_exp);
	cout << math_exp_post << endl;

	float num = calculate(math_exp_post);
	cout << num << endl;
	
	return 0;
}