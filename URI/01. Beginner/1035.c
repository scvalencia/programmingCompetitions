#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	bool condition = (b > c) && (d > a);
	condition &= (c + d) > (a + b);
	condition &= (c > 0) && (d > 0) && (a % 2 == 0);

	printf("%s\n", condition ? "Valores aceitos" : "Valores nao aceitos");
	return 0;
}