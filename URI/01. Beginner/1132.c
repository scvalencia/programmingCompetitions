#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

int main(int argc, char const *argv[]) {
	int a, b, i, sum = 0;
	scanf("%d%d", &a, &b);

	int m = MIN(a, b), n = MAX(a, b);

	for(i = m; i <= n; i++)
		if(i % 13 != 0)
			sum += i;

	printf("%d\n", sum);

	return 0;
}