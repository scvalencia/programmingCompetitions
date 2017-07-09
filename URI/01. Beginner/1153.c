#include <stdio.h>
#include <stdlib.h>

long long int* factorial;

int main(int argc, char const *argv[]) {
	factorial = (long long int*) malloc(sizeof(long long int) * 100);

	factorial[0] = 1;

	int n, i = 1;

	for(; i < 20; i++)
		factorial[i] = factorial[i - 1] * i;

	scanf("%d", &n);

	printf("%lld\n", factorial[n]);

	return 0;
}