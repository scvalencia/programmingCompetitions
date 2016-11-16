#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int* factorial = (int*) malloc(sizeof(int) * 11), i, n;
	*(factorial + 0) = 0;
	*(factorial + 1) = 1;

	for(i = 2; i < 11; i++)
		*(factorial + i) = *(factorial + (i - 1)) * i;

	scanf("%d", &n);
	printf("%d\n", *(factorial + n));
	
	return 0;
}