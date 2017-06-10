#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int n, i;
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		if(i % 2 == 0)
			printf("%d^2 = %d\n", i, i * i);

	return 0;
}