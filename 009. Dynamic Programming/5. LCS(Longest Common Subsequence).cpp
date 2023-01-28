#include <iostream>
#include <string>
#define MAX 10
#define MAXF(x, y) (x>y?x:y)

using namespace std;

int arr[MAX][MAX];
string X;
string Y;

int LCS(int m, int n) {

	// (생략) arr[i][0] & arr[0][j] = 0으로 초기화
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (X[i - 1] == Y[j - 1]) {
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			else {
				arr[i][j] = MAXF(arr[i - 1][j], arr[i][j - 1]);
			}
		}
	}

	return arr[m][n];
}

int main() {
	X = "abcbdab";
	Y = "bdcacb";
	cout << LCS(7, 6);
	return 0;
}