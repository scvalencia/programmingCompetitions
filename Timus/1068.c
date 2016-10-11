#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int number, negative, sum;
	scanf("%d", &number);
	negative = number < 0;
	number = abs(number);
	sum = number * (number + 1) / 2;
	
	if(number == 0)
		printf("1\n");
	else
		printf("%d\n", negative ? -(sum - 1) : sum);

	return 0;
}