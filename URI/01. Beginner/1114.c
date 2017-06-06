#include <stdio.h>

#define CORRECT_PASSWORD 2002

int main(int argc, char const *argv[]) {
	int password;

	while(scanf("%d", &password) && password != CORRECT_PASSWORD)
		printf("Senha Invalida\n");

	printf("Acesso Permitido\n");

	return 0;
}