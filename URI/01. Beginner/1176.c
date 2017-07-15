#include <stdio.h>
#include <stdlib.h>

long long int* fibonacci;

int main(int argc, char const *argv[]) {
	fibonacci = (long long int*) malloc(sizeof(long long int) * 100);

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	int TC, n, i = 2;

	for(; i < 80; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	scanf("%d", &TC);

	while(TC--) {
		scanf("%d", &n);
		printf("Fib(%d) = %lld\n", n, fibonacci[n]);
	}

	return 0;
}