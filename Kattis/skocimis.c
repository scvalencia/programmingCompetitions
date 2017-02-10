#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main(int argc, char const *argv[]) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int leftmostMove = b - a - 1;
	int rightMost = c - b - 1;

	printf("%d\n", MAX(leftmostMove, rightMost));
	return 0;
}