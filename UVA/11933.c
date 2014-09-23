#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	long long int n = 9;
	while(scanf("%lld", &n) && n != 0) {
		long long int a = 0L, b = 0L;
		int bspec = floor(log(n)/log(2)) + 1;
		int counter = 1;
		int i = 0;
		while(i < bspec) {
			if((n & (1 << i)) != 0) {
				if(counter % 2 != 0)
					a |= (1 << i);
				else
					b |= (1 << i);
				counter++;
			}
			i++;
		}
		printf("%lld %lld\n", a, b);
	}
	return 0;
}