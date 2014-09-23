#include <stdio.h>

int main(int argc, char **argv) {
	long long int n, k, number, ans = 0;
	scanf("%lld %lld", &n, &k);
	while(n--) {
		scanf("%lld", &number);
		if(number % k == 0) 
			ans++;
	}
	printf("%lld\n", ans);
	return 0;
}