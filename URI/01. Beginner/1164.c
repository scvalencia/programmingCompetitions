#include <stdio.h>

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);

	while(TC--) {
		int n, i = 0, sum = 0;
		scanf("%d", &n);

		for(i = 1; i < n; i++)
			if(n % i == 0)
				sum += i;

		printf("%d %s\n", n, (sum == n) ? "eh perfeito" : "nao eh perfeito");
	}

	return 0;
}