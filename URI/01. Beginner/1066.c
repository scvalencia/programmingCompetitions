#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 0;
	int even = 0, odd = 0, positive = 0, negative = 0;

	while(i++ < 5) {
		int number;
		scanf("%d", &number);

		if(number % 2 == 0)
			even++;
		else
			odd++;

		if(number > 0)
			positive++;
		if(number < 0)
			negative++;

	}

	printf("%d valor(es) par(es)\n", even);
	printf("%d valor(es) impar(es)\n", odd);
	printf("%d valor(es) positivo(s)\n", positive);
	printf("%d valor(es) negativo(s)\n", negative);
	
	return 0;
}