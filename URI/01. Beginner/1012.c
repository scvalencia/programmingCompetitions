#include <math.h>
#include <stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[]) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	double triangle = (a * c) / 2.0;
	double circle = (PI * pow(c, 2));
	double trapezium = (c / 2.0) * (a + b);
	double square = b * b;
	double rectangle = a * b;
	
	printf("TRIANGULO: %.3lf\n", triangle);
	printf("CIRCULO: %.3lf\n", circle);
	printf("TRAPEZIO: %.3lf\n", trapezium);
	printf("QUADRADO: %.3lf\n", square);
	printf("RETANGULO: %.3lf\n", rectangle);

	return 0;
}