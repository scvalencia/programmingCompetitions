#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
	double n;
	scanf("%lf", &n);

	int integral = (int) n;
	int decimal = (n - integral) * 100;

	int r100 = integral / 100; integral %= 100;
	int r050 = integral / 50; integral %= 50;
	int r020 = integral / 20; integral %= 20;
	int r010 = integral / 10; integral %= 10;
	int r005 = integral / 5; integral %= 5;
	int r002 = integral / 2; integral %= 2;
	int r001 = integral / 1;

	int m050 = decimal / 50; decimal %= 50;
	int m025 = decimal / 25; decimal %= 25;
	int m010 = decimal / 10; decimal %= 10;
	int m005 = decimal / 5; decimal %= 5;
	int m001 = decimal / 1;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", r100);
	printf("%d nota(s) de R$ 50.00\n", r050);
	printf("%d nota(s) de R$ 20.00\n", r020);
	printf("%d nota(s) de R$ 10.00\n", r010);
	printf("%d nota(s) de R$ 5.00\n", r005);
	printf("%d nota(s) de R$ 2.00\n", r002);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", r001);
	printf("%d moeda(s) de R$ 0.50\n", m050);
	printf("%d moeda(s) de R$ 0.25\n", m025);
	printf("%d moeda(s) de R$ 0.10\n", m010);
	printf("%d moeda(s) de R$ 0.05\n", m005);
	printf("%d moeda(s) de R$ 0.01\n", m001);

	return 0;
}