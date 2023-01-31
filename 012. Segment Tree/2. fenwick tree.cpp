#include <iostream>

int main() {

    char c = 'A';
    short s = 2;
    int i = 3;
    long l = 4;
    long long ll = 5;

    float f = 6.5;
    double d = 7.7;
    long double ld = 8.2;

    printf("%c %d %d %ld %Ld", c, s, i, l, ll);
    printf("%f, %lf, %Lf", f, d, ld);

    return 0;
}