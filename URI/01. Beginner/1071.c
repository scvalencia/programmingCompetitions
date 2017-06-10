#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

int main(int argc, char const *argv[]) {
	int x, y, i, summation = 0;
	scanf("%d%d", &x, &y);

	int m = MIN(x, y), n = MAX(x, y);

	for(i = m + 1; i < n; i++)
		if(abs(i % 2) == 1)
			summation += i;
	
	printf("%d\n", summation);

	return 0;
}