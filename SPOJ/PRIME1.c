#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define MAX_BOUND 1000000000
#define SQRT_MAX_BOUND (int) ceil(sqrt(MAX_BOUND))

int primes[32000];

void sieve(int low, int upp) {
	bool A[upp + 1];
	int i = 0, j = 0, k = 0;
	for(; i <= upp; i++)
		A[i] = true;
	for(i = 2; i <= upp; i++) {
		for(j = i + 1; j <= upp; j++)
			if(j % i == 0 && A[j])
				A[j] = false;
	}
	for(i = 2; i <= upp; i++) {
		if(A[i]) {
			primes[k] = i;
			k++;
		}
	}
}

int main(int argc, char const *argv[]) {
	sieve(1, 32000 - 1);
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int i = a;
		for(; i < b; i++)
			if(primes[i] < b)
				printf("%d\n", primes[i]);
		printf("\n");
	}
	return 0;
}