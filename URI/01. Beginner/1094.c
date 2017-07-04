#include <stdio.h>

int main(int argc, char const *argv[]) {
	int size, total = 0, coelhos = 0, ratos = 0, sapos = 0;

	scanf("%d", &size);

	while(size--) {
		int number;
		char animal;
		scanf("%d %c", &number, &animal);

		if(animal == 'C')
			coelhos += number;
		else if(animal == 'R')
			ratos += number;
		else if(animal == 'S')
			sapos += number;

		total += number;

	}

	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", (coelhos / (total + 0.0)) * 100);
	printf("Percentual de ratos: %.2f %%\n", (ratos / (total + 0.0)) * 100);
	printf("Percentual de sapos: %.2f %%\n", (sapos / (total + 0.0)) * 100);

	return 0;
}