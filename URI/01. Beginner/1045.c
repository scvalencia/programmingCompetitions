#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

void sort3numbers(double* a, double* b, double* c) {
	double min = MIN(*a, MIN(*b, *c));
	double max = MAX(*a, MAX(*b, *c));
	double mid;

	if((*b == min && *c == max) || (*c == min && *b == max))
		mid = *a;
	else if((*a == min && *c == max) || (*c == min && *a == max))
		mid = *b;
	else if((*b == min && *a == max) || (*a == min && *b == max))
		mid = *c;

	*a = max; *b = mid; *c = min;
}

int main(int argc, char const *argv[]) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	sort3numbers(&a, &b, &c);

	if(a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	
	if(a * a == b * b + c * c)
		printf("TRIANGULO RETANGULO\n");
	if(a * a > (b * b + c * c))
		printf("TRIANGULO OBTUSANGULO\n");
	if(a * a < (b * b + c * c))
		printf("TRIANGULO ACUTANGULO\n");
	if(a == b && b == c)
		printf("TRIANGULO EQUILATERO\n");
	if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
		printf("TRIANGULO ISOSCELES\n");

	return 0;
}