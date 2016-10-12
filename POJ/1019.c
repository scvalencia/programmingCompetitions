#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 31270
#define BOUND 2147483647

int* digits;
long long int* accumulate;

int digitCount(long long int number) {

	if(number < 10)
		return 1;
	else if(number < 100)
		return 2;
	else if(number < 1000)
		return 3;
	else if(number < 10000)
		return 4;
	else if(number < 100000)
		return 5;
	else if(number < 1000000)
		return 6;
	else if(number < 10000000)
		return 7;
	else if(number < 100000000)
		return 8;
	else if(number < 1000000000)
		return 9;
	
	return 10;
}

void memoize() {
	digits = malloc(sizeof(int) * SIZE);
	accumulate = malloc(sizeof(long long int) * SIZE);

	*(digits + 0) = 1;
	*(accumulate + 0) = 1;

	long long int i  = 1;
	for(; i < SIZE; i++) {
		*(digits + i) = *(digits + (i - 1)) + digitCount(i + 1);
		*(accumulate + i) = *(accumulate + (i - 1)) + (long long int)*(digits + i);
	}
}

int main(int argc, char const *argv[]) {

	memoize();

	int TC, digit, i, j, number, c;

	scanf("%d", &TC);

	while(TC--) {
		scanf("%d", &digit);
		for(i = 0; ; i++)
			if(*(accumulate + i) >= digit)
				break;
		i--;

		for(j = *(accumulate + i), i = 1; j < digit; j += digitCount(i), i++) {
			printf("%d ", i);
		}

		printf("\n");

	}

	return 0;
}