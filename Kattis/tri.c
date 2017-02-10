#include <stdio.h>

#define PLUS '+'
#define MINUS '-'
#define EQUAL '='
#define PRODUCT '*'
#define DIVISION '/'

int main(int argc, char const *argv[]) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	char l, r;

	if(a + b == c) {
		l = PLUS; r = EQUAL;
	} else if(a - b == c) {
		l = MINUS; r = EQUAL;
	} else if(a * b == c) {
		l = PRODUCT; r = EQUAL;
	} else if(a / b == c) {
		l = DIVISION; r = EQUAL;
	} else if(a == b + c) {
		l = EQUAL; r = PLUS;
	} else if(a == b - c) {
		l = EQUAL; r = MINUS;
	} else if(a == b * c) {
		l = EQUAL; r = PRODUCT;
	} else if(a == b / c) {
		l = EQUAL; r = DIVISION;
	}

	printf("%d%c%d%c%d\n", a, l, b, r, c);
	return 0;
}