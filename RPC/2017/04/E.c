#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);

	while(TC--) {
		int N, K, i = 0, sum = 0;
		scanf("%d %d", &N, &K);

		int* array = (int*) malloc(sizeof(int) * N);

		for(; i < N; i++)
			scanf("%d", &array[i]);

		bool flag = false;

		while(!flag) {
			for(i = 0; i < N; i++) {
				sum += *(array + i);
				if(sum % K == 0) {
					flag = true;
					break;
				}
			}
		}

		printf("%s.\n\a", (flag) ? "Yes" : "No");


	}

	return 0;
}