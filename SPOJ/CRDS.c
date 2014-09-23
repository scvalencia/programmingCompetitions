#include <stdio.h>

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		long long int n;
		scanf("%lld", &n);
		long long int k = 2*n + 3*n*(n - 1)/2;
		k = k % 1000007;
		printf("%lld\n", k);
	}
	return 0;
}