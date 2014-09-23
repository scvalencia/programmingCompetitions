#include <stdio.h>
#define MAX 500001

long long int values[MAX];

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int n, i = 1, ans = 0;
		scanf("%d", &n);
		for(; i <= n / 2; i++) {
			if(n % i == 0)
				ans += i;
		}		
		printf("%d\n", ans);
	}
	return 0;
}