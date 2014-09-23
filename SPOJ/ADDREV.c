#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int size(int number) {
	int ans = 0;
	while(number != 0) {
		number /= 10;
		ans++;
	}
	return ans;
}

int reversedNumber(int number) {
	int digits = size(number);
	int ans = 0, power = pow(10, digits - 1), digit = 0;
	while(number != 0) {
		digit = number % 10;
		ans += digit * power;
		digits--;
		power = pow(10, digits - 1);
		number /= 10;
	}
	return ans;
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", reversedNumber(reversedNumber(a) + reversedNumber(b)));
	}
	return 0;
}