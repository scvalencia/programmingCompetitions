#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long reverse(long n) {
	long reverse = 0L;
	while (n != 0) {
		reverse = reverse * 10;
		reverse = reverse + n % 10;
		n = n / 10;
   }
   return reverse;
}

bool isPrime(long number) {
	int i;
	for(i = 2; i * i <= number; i++)
		if(number % i == 0)
			return false;
	return true;
}

int main(int argc, char const *argv[]) {
	long N = 2;
	while(scanf("%lu", &N) != EOF) {
		if(!isPrime(N))
			printf("%ld is not prime.\n", N);
		if(isPrime(N)) {
			long RN = reverse(N);
			if(N != RN && isPrime(RN))
				printf("%ld is emirp.\n", N);				
			else
				printf("%ld is prime.\n", N);
		}
	}
	return 0;
}