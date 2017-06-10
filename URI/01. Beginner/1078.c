#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int n, i;
	scanf("%d", &n);

	for(i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", i, n, n * i);

	return 0;
}