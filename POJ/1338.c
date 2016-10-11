#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1500
#define MAX_BOUND 1000000000

int uglyNumbers[LIMIT];

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void computeUglyNumbers() {

	int i, j, k, pos = 0;

	i = 1;
	while(i < MAX_BOUND) {
		j = 1;
		while(i * j < MAX_BOUND) {
			k = 1;
			while(i * j * k < MAX_BOUND) {

				if(pos > LIMIT)
					goto end;

				uglyNumbers[pos] = i * j * k;
				k *= 5;
				pos++;
			}
			j *= 3;
		}
		i *= 2;
	}

	end:

		//qsort(uglyNumbers, MAX_BOUND, sizeof(int), cmpfunc);

		for(int i = 0, current = 0; current < LIMIT; i++) {
			if(uglyNumbers[i] > 0) {
				current++;
				printf("%d, ", uglyNumbers[i]);
			}
		}
}

int main(int argc, char const *argv[]) {
	computeUglyNumbers();

	/*
	int index;

	while(scanf("%d", &index) && index) {
		printf("%d\n", computed[index - 1]);
	}
	*/

	return 0;
}