#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

int main(int argc, char const *argv[]) {
	int a, b, i;

	while(scanf("%d%d", &a, &b) && a > 0 && b > 0) {

		int m = MIN(a, b), n = MAX(a, b), sum = 0;

		for(i = m; i <= n; i++) {
			printf("%d ", i);
			sum += i;
		}

		printf("Sum=%d\n", sum);

	}

	return 0;
}