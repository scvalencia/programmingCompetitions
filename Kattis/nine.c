#include <stdio.h>

#define M 1000000007

long long int fast_pow(long long base, long long n) {
	if(n == 0) return 1;
	else if(n == 1) return base;
	else {
		long long int half = fast_pow(base, n / 2);
		long long int hsqrtd = ((half % M) * (half % M)) % M;
		if(n % 2 == 0)
			return hsqrtd;
		else
			return ((hsqrtd % M) * (base % M)) % M;

	}
}

int main(int argc, char const *argv[]) {
	int TC;
	long long int d;
	scanf("%d", &TC);
	while(TC--) {		
		scanf("%lld", &d);
		printf("%lld\n", (8 * ((fast_pow(9, d - 1)) % M)) % M);
	}
	return 0;
}