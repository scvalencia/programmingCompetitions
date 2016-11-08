#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n) {
	int ans = 0;

	while(n != 0) {
		ans += n % 10;
		n /= 10;
	}

	return ans;
}

int main(int argc, char const *argv[]) {

	int n, i, sod;

	while(scanf("%d", &n) && n != 0) {
		sod = sumOfDigits(n);
		i = 11;
		while(1) {
			if(sumOfDigits(i * n) == sod)
				break;
			i++;
		}

		printf("%d\n", i);
	}

	return 0;
}