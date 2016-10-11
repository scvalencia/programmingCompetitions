#include <stdio.h>
#include <stdlib.h>

#define MAX_BOUND 5.20
#define CAPACITY 300

double* memory;
int total, i;

void memoization() {
	memory = (double*) malloc(sizeof(double) * CAPACITY);
	i = 0;
	*(memory + i) = 0.0;
	while(*(memory + i) < MAX_BOUND) {
		i++;
		*(memory + i) = *(memory + (i - 1)) + ((double) 1 / (i + 1.0));
	}
	total = i;
}

int main(int argc, char const *argv[]) {
	memoization();
	float length;

	while(scanf("%f", &length) != EOF && length != 0.0) {
		for(i = 0; *(memory + i) < length; i++);
		printf("%d card(s)\n", i);
	}

	return 0;
}