#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int d1, d2, i, j, max = -1, sum;
	scanf("%d %d", &d1, &d2);
	int* freqs = (int*) malloc(sizeof(int) * ((d1 * d2) + 1));

	for(i = 1; i <= d1; i++)
		for(j = 1; j <= d2; j++) {
			freqs[i + j] += 1;

			if(freqs[i + j] > max)
				max = freqs[i + j];
		}

	for(i = 1; i <= d1 * d2; i++)
		if(freqs[i] == max)
			printf("%d\n", i);

	return 0;
}