#include <stdio.h>

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);

	while(TC--) {
		int a, b, i = 1, sum = 0;
		scanf("%d %d", &a, &b);

		a = (a % 2 == 0) ? a + 1 : a;
		sum += a;

		for(; i < b; i++) {
			a += 2;
			sum += a;
		}

		printf("%d\n", sum);
	}

	return 0;
}