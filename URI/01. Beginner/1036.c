#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	double discriminant = pow(b, 2) - 4 * a * c;

	if(discriminant < 0 || 2 * a == 0)
		printf("Impossivel calcular\n");

	else {
		printf("R1 = %.5lf\n",((-b) + discriminant)/(2 * a));
        printf("R2 = %.5lf\n",((-b) - discriminant)/(2 * a));
	}

	return 0;
}