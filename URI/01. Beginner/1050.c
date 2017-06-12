#include <stdio.h>

int main(int argc, char const *argv[]) {
	int dial;
	scanf("%d", &dial);

	switch(dial) {
		case 61:
			printf("Brasilia\n");
			break;
		case 71:
			printf("Salvador\n");
			break;
		case 11:
			printf("Sao Paulo\n");
			break;
		case 21:
			printf("Rio de Janeiro\n");
			break;
		case 32:
			printf("Juz de Fora\n");
			break;
		case 19:
			printf("Campinas\n");
			break;
		case 27:
			printf("Victoria\n");
			break;
		case 31:
			printf("Belo Horizonte\n");
			break;
		default:
			printf("%d nao cadastrado\n", dial);
			break;
	}

	return 0;
}