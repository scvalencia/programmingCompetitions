#include <stdio.h>
#include <stdlib.h>

#define MODULO 1000000007

int main(int argc, char const *argv[]) {
	int n, i;
	scanf("%d", &n);

	int* array = (int*) malloc(sizeof(int) * n);

	for(i = 0; i < n; i++)
		scanf("%d", &array[i]);

	long product = 1L;

	for(i = 0; i < n; i++) {
		int current = array[i] % MODULO;
		product = (current * (product % MODULO)) % MODULO;
	}

	printf("%ld\n", product);
	return 0;
}