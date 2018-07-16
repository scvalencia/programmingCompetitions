#include <stdio.h>
#include <stdlib.h>

#define SIZE 52

void memoize(long* array, int n) {
	int i = 3;
	while(i < n) {
		*(array + i) = *(array + (i - 1)) + *(array + (i - 2));
		i++;
	}
}

int main(int argc, char const *argv[]) {
	long* array = malloc(sizeof(int) * SIZE);
	int current;
	*(array + 1) = 1; *(array + 2) = 2;

	memoize(array, SIZE);

	while(scanf("%d", &current), current != 0)
		printf("%ld\n", *(array + current));
	return 0;
}