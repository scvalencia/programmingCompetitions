#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int TC, N, i;
	scanf("%d", &TC);
	while(TC--) {
		scanf("%d", &N);
		int *array = malloc(N * sizeof(int)), top = 0;
		double average = 0;
		for(i = 0; i < N; i++) {
			scanf("%d", array + i);
			average += *(array + i);
		} average /= N;

		for(i = 0; i < N; i++)
			if(*(array + i) > average)
				top++;

		printf("%.3lf%c\n", (double) (top * 100) / (double) N, '%');

	}
	return 0;
}