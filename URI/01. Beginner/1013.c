#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (a + b + abs(a - b)) / 2

int main(int argc, char const *argv[]) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d eh o maior\n", MAX(a, MAX(c, b)));
	return 0;
}