#include <stdio.h>

int main(int argc, char const *argv[]) {
	int a, b;

	while(scanf("%d%d", &a, &b) && a != b)
		printf("%s\n", (a < b) ? "Crescente" : "Decrescente");

	return 0;
}