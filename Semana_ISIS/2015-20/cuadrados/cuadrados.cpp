#include <stdio.h>

#define MOD 1000000007

void solve(long long int n, long long int m) {
	// Num squares = sum(i = 0, min(n, m), (x - i) * (y - i))
	long long int min_size = (n < m) ? n : m;
	long long int i = 0, num_squares = 0, num_rectanges = 0;

	for(; i < min_size; i++)
		num_squares += ((n - i) % MOD) * ((m - i) % MOD) % MOD;

	num_squares = num_squares % MOD;

	while (n > 0) {
		long long sum = (m * (m + 1)) / 2;
		num_rectanges = (num_rectanges + n * sum) % MOD;
		n--;
	}

	printf("%lld %lld\n", num_squares, num_rectanges);
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