#include <stdio.h>
#include <stdlib.h>

long long int* fibonacci;

int main(int argc, char const *argv[]) {
	fibonacci = (long long int*) malloc(sizeof(long long int) * 100);

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	int n, i = 2;

	for(; i < 50; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	scanf("%d", &n);

	for(i = 0; i < n; i++)
		printf("%lld%c", fibonacci[i], (i == n - 1) ? '\n' : ' ');

	return 0;
}