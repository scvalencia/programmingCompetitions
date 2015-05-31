#include <stdio.h>
#include <math.h>

long long int divisorSum(long long int n) {
	int ans = 1L, i = 2L;
	for(; i < sqrt(n); i++)
		if(n % i == 0)
			ans += i + (n/i);
	return ans;
}

int main(int argc, char const *argv[]) {
	int ans = 0, i = 1;
	while(i <= 10000) {
		int a = divisorSum(i);
		if(a > i && divisorSum(a) == i)
			ans += (a + i);
		i++;
	}
	printf("%d\n", ans);
	return 0;
}