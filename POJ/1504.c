#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long reverse(long number) {
	long reverse = 0;

	while(number != 0) {
		reverse *= 10;
		reverse += number % 10;
		number /= 10;
	}

	return reverse;
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		long a, b;
		scanf("%ld %ld", &a, &b);
		a = reverse(a);
		b = reverse(b);
		a = reverse(a + b);
		printf("%ld\n", a);
	}
	return 0;
}