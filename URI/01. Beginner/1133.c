#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

int main(int argc, char const *argv[]) {
	int a, b, i;
	scanf("%d%d", &a, &b);

	int m = MIN(a, b), n = MAX(a, b);

	for(i = m + 1; i < n; i++)
		if(i % 5 == 2 || i % 5 == 3)
			printf("%d\n", i);

	return 0;
}