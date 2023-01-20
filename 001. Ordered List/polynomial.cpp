#include <iostream>
#define MAX_ 50
#define MAX(a, b) ((a>b)?a:b)

using namespace std;

struct Polynomial {
	int chasu;
	float all[MAX_];
};

Polynomial addPoly(Polynomial, Polynomial);
void printPoly(Polynomial);


int main() {
	Polynomial a = { 2, {3, 0, 1} };
	Polynomial b = { 3, {4, 5, 6, 7} };
	printPoly(a);
	printPoly(b);
	printPoly(addPoly(a, b));

	return 0;
}

Polynomial addPoly(Polynomial a, Polynomial b) {
	Polynomial c;
	int dega = a.chasu;
	int degb = b.chasu;
	int idxa = 0, idxb = 0, idxc = 0;
	c.chasu = MAX(dega, degb);

	while (idxa <= a.chasu && idxb <= b.chasu) {
		if (dega > degb) {
			c.all[idxc++] = a.all[idxa++];
			dega--;
		}
		else if (dega == degb) {
			c.all[idxc++] = a.all[idxa++] + b.all[idxb++];
			dega--;
			degb--;
		}
		else {
			c.all[idxc++] = b.all[idxb++];
			degb--;
		}
	}

	return c;
}

void printPoly(Polynomial a) {
	int degree = a.chasu;
	for (int i = 0; i <= a.chasu; i++) {
		cout << a.all[i] << "x^" << degree--;
		if (i < a.chasu)
			cout << " + ";
	}
	cout << endl;
}