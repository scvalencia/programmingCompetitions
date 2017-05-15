#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BOUND 100

int sieve[];
int values[];
int primes[];

int gcd(int a, int b) {
	if (a == 0) 
		return b;

	if (b == 0) 
		return a;

	return gcd(b, a % b);
}

int possible(int item, int n, int partitions) {

	int candidate = primes[item];
	int minimum = 0, idx = 0, flag = 1, pivot;

	while(idx < n) {

		pivot = values[idx];

		if((minimum >= partitions) || (sieve[pivot] < candidate))
			return false;

		idx += 1;

		while(idx < n) {
			pivot = gcd(pivot, values[idx]);

			if (sieve[pivot] < candidate) 
				break;
			else
				idx += 1;
		}

		minimum++;
	}

	return true;
}

int main(int argc, char const *argv[]) {

	int n, k, i;

	sieve = (int*) malloc(sizeof(int) * (BOUND + 1));
	for(i = 0; i < BOUND + 1; i++)
		sieve[i] = -1;

	for (i = 2; i < BOUND + 1; i++)
		if (sieve[i] == -1) {
			int j = i;
			for (; j < BOUND + 1; j+=i)
				sieve[j] = i;
		}

	int primeCount = 0;
	for (i = 2; i < BOUND + 1; i++)
		if (sieve[i] == i)
			primeCount++;

	primes = (int*) malloc(sizeof(int) * primeCount);
	int index = 0;
	for (i = 2; i < primeCount; i++)
		if (sieve[i] == i)
			primes[index++] = i;

	
	scanf("%d %d", &n, &k);

	values = (int*) malloc(sizeof(int) * n);
	for(i = 0; i < n; i++)
		scanf("%d", &values[i]);

	for(i = 0; i < BOUND + 1; i++)
		printf("%d ", sieve[i]);
	printf("\n\n");
	for(i = 0; i < primeCount; i++)
		printf("%d ", primes[i]);
	printf("\n\n");
	for(i = 0; i < n; i++)
		printf("%d ", values[i]);
	printf("\n\n");

	if(!possible(0, n, k))
		printf("%d\n", 0);

	

	else {
		int low = 0, high = primeCount - 1;

		while(low < high - 1) {
			int mid = (low + high) / 2;
			if(possible(mid, n, k))
				low = mid;
			else
				high = mid - 1;
		}

		while(low < primeCount && possible(low, n, k))
			low++;

		printf("%d\n", primes[low - 1]);
	}

	return 0;
}