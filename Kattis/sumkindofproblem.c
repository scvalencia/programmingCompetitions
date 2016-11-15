#include <stdio.h>

int main(int argc, char const *argv[]) {
	int testcases;
	scanf("%d", &testcases);

	while(testcases--) {
		int number, n;
		scanf("%d %d", &number, &n);

		int s1 = 0, s2 = 0, s3 = 0, i, j;

		for(i = 0; i < n; i++, s1 += i);
		for(j = 1, i = 0; i < n; s2 += j, j += 2, i++);
		for(j = 0, i = 0; i < n; j += 2, s3 += j, i++);

		printf("%d %d %d %d\n", number, s1, s2, s3);

	}

	return 0;
}