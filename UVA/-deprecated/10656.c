#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int N, i, *array;
	while(scanf("%d", &N), N != 0) {
		i = 0;
		array = malloc(N * sizeof(int));
		while(i < N)
			scanf("%d", (array + (i++)));
		for(i = 0; i < N; i++)
			if(*(array + i) != 0) {
				if(i == N - 1)
					printf("%d\n", *(array + i));
				else
					printf("%d ", *(array + i));
		}

	}
	return 0;
}