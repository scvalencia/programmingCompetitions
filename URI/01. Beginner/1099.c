#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

int main(int argc, char const *argv[]) {
	int n;
	scanf("%d", &n);

	while(n--) {
		int x, y, i, sum = 0;
		scanf("%d%d", &x, &y);

		int m = MIN(x, y), n = MAX(x, y);

		for(i = m + 1; i < n; i++)
			if(i % 2 != 0)
				sum += i;

		printf("%d\n", sum);

	}

	return 0;
}