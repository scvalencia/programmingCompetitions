#include <stdio.h>

#define MOD 1000000007

void solve(long long int n, long long int m) {
	long long int ans = 1, aux1 = 1, aux2 = 1;
	aux1 = (((n * n) + n));
	printf("%lld\n", aux1);
	aux2 = ((m * m) % MOD + m % MOD) % MOD;
	ans = (aux1 % MOD * aux2 % MOD) % MOD;

	//printf("%lld %lld\n", ans, ans);
}

int main(int argc, char const *argv[]) {
	long long int TC, n, m;
	scanf("%lld", &TC);
	while(TC--) {
		scanf("%lld %lld", &n, &m);
		solve(n, m);
	}
	return 0;
}