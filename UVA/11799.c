#include <stdio.h>

int main(int argc, char **argv) {
	int TC, cases = 1;
	scanf("%d", &TC);
	while(TC--) {
		int N, i = 0;
		scanf("%d", &N);
		int array[N], max = 0;
		for(; i < N; i++) {
			scanf("%d", &array[i]);
			if(array[i] > max)
				max = array[i];
		}

		printf("Case %d: %d\n", cases, max);
		cases++;
	}
	return 0;
}