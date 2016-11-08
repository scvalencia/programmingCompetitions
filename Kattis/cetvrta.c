#include <stdio.h>

void getBaseAndExponent(int n, int* base, int* exponent) {
	*base = n / 10;
	*exponent = n % 10;
}

int missing(int n1, int n2, int n3) {
	return (n1 == n2) ? n3 : (n1 == n3) ? n2 : n1;
}

int main(int argc, char const *argv[]) {

	int x1, x2, x3;
	int y1, y2, y3;

	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);

	printf("%d %d\n", missing(x1, x2, x3), missing(y1, y2, y3));

	return 0;
}