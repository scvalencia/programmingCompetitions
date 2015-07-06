#include <math.h>
#include <stdio.h>
#include <stdbool.h>

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

int digits(int number) {
	int count = 0;
  	while(number != 0) {
      	number /= 10;
      	++count;
  	}
  	return count;
}

bool isTruncable(int n) {	
	if(isPrime(n)) {
		int i = 10, d = digits(n), b = pow(10, d - 1);
		while(i <= pow(10, d - 1)) {
			if(!(isPrime(n % i) && isPrime(n / i)))				
				return false;
			i *= 10;
		}
		return true;
	}
	return false;
}

int main(int argc, char const *argv[]) {
	
	int count = 0, sum = 0, n = 10;
	for(; count != 11; n++)
		if(isTruncable(n)) {
			count++;
			sum += n;
		}
	
	printf("%d\n", sum);
 	return 0;
}