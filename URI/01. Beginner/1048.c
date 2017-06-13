#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int percentage;
	double salary, rise = 0.0;
	scanf("%lf", &salary);

	if(salary >= 0 && salary <= 400.00)
		percentage = 15;
	else if(salary >= 400.01 && salary <= 800.0)
		percentage = 12;
	else if(salary >= 800.01 && salary <= 1200.0)
		percentage = 10;
	else if(salary >= 1200.01 && salary <= 2000.0)
		percentage = 7;
	else if(salary >= 1200.01)
		percentage = 4;

	rise = (salary * (float) percentage) / 100.0;

	printf("Novo salario: %.2lf\n", salary + rise);
	printf("Reajuste ganho: %.2lf\n", rise);
	printf("Em percentual: %d %%\n", percentage);

	return 0;
}