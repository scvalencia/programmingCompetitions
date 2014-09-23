#include <stdio.h>
#include <stdbool.h>

int sum_digits(int number) {
	int sum = 0;
	while(number != 0) {
		sum += number % 10;
		number /= 10;
	}
	if(sum / 10 == 0)
		return sum;
	else 
		return sum_digits(sum);
}

int modulo_nine(int number) {
	return number % 9;
}

int main(int argc, char *argv[]) {
	int number = 1000;
	while (true) {
		scanf("%d", &number);
		if(number == 0)
			break;
		printf("%d\n", sum_digits(number));
	}
	return 0;
}