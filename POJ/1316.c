#include <stdio.h>
#include <stdlib.h>

#define MAX_BOUND 10000

int* sieve;

int sumOfDigits(int n) {
	if(n < 10)
		return n;
	else
		return (n % 10) + sumOfDigits(n / 10);
}

void generateSequence(int n) {
	while(n < MAX_BOUND) {
		int digitized = n + sumOfDigits(n);
		if(digitized > MAX_BOUND || *(sieve + digitized) != digitized)
			return;

		*(sieve + digitized) = n;
		n = digitized;
	}
}

int main(int argc, char const *argv[]) {
	int i = 0;
	sieve = (int*) malloc(sizeof(int) * (MAX_BOUND + 10));

	for(; i != MAX_BOUND + 10; i++) 
		*(sieve + i) = i;

	for(i = 1; i != MAX_BOUND; i++) 
		generateSequence(i);


	for(i = 1; i != MAX_BOUND; i++)
		if(*(sieve + i) == i) 
			printf("%d\n", i);

	return 0;
}

