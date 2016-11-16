#include <stdio.h>
#include <stdlib.h>

#define MODULO 10000000007

int main(int argc, char const *argv[]) {
	int n, k, i, j, c, idx;
	scanf("%d %d", &n, &k);
	int* array = (int*) malloc(sizeof(int) * n);
	long long int* summation = (long long int*) malloc(sizeof(int) * (n - k + 1));

	for(i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for(i = 0; i < n - k + 1; i++) {
		long long int sum = 0LL;
		for(idx = i, c = 0; c < k; c++) {
			long long int power = ((c + 1) % MODULO * (c + 1) % MODULO) % MODULO;
			long long int product = (power % MODULO * array[idx++] % MODULO) % MODULO;
			sum = (sum % MODULO + product % MODULO) % MODULO;
		}

		summation[i] = sum;
	}

	i = 0;
	printf("%lld", summation[i]);

	for(i = 1; i < n - k + 1; i++)
		printf(" %lld", summation[i]);

	printf("\n");

	return 0;
}