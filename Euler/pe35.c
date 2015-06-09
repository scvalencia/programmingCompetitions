#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#define LIMIT 1000000

int digits(int number) {
	int count = 0;
  	while(number != 0) {
      	number /= 10;
      	++count;
  	}
  	return count;
}

void nextCyclic(int* n, int d) {
	int first = (*n % 10), leading = (*n / 10);
	*n = (first * (pow(10, d - 1)) + leading);
}

bool isPrime(int n) {
	if(n < 2)
		return false;
	if(n == 2 || n == 3)
		return true;
	if(n % 2 == 0 || n % 3 == 0)
		return false;

	int i = 5, w = 2;
	while(i * i <= n) {
		if(n % i == 0)
			return false;

		i += w;
		w = 6 - w;
	}
	return true;
}

int main(int argc, char const *argv[]) {
	
	int ans = 0, i = 2, count, m;
	for(; i <= LIMIT; i++) {
		if(isPrime(i)) {
			bool flag = true;
			count = digits(i);
			m = i;
			do {
				nextCyclic(&m, count);
				if(!isPrime(m)) {
					flag = false;
					break;
				}
			} while(i != m);
			if(flag)
				ans++;
		}
	}

	printf("%d\n", ans);
	return 0;
}