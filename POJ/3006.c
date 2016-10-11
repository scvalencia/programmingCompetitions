#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool prime(int number) {
	if(number == 1)
		return false;
	if(number == 2)
		return true;

	int i = 2, bound = ceil(sqrt(number));
	for(; i <= bound; i++)
		if(number % i == 0)
			return false;
	return true;
}

int main(int argc, char const *argv[]) {
	int a, d, n;
	
	while((scanf("%d %d %d", &a, &d, &n) != EOF) && (a || d || n)) {

		int primeCount = 0, sequence = a;
		while(primeCount != n) {
			if(prime(sequence))
				primeCount++;
			sequence += d;
		}
		printf("%d\n", sequence - d);
	}

	return 0;
}
