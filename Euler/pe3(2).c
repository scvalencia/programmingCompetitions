#include <stdio.h>
#include <math.h>

int main(void) {
	long int number = 600851475143;
	for(int i = 2; i * i < number; i++) 
		while(number % i == 0) 
			number = number / i;
	printf("%ld\n", number);
}