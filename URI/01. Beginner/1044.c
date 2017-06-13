#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

int main(int argc, char const *argv[]) {
	int a, b, m, n;
	scanf("%d%d", &a, &b);

	m = MIN(a, b);
	n = MAX(a, b);

	printf("%s\n", (n % m == 0) ? "Sao Multiplos" : "Nao sao Multiplos");

	return 0;
}