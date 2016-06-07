#include <stdio.h>

long int ldabs(long int n) {
	return (n < 0) ? -n : n;
}

int main(int argc, char const *argv[]) {
	long int a, b;

	while(scanf("%ld %ld", &a, &b) == 2)
		printf("%ld\n", ldabs(a - b));	
	return 0;
}