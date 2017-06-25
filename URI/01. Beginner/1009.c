#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	double salary, additional;
	char* name = (char *) malloc(sizeof(char) * 100);
	scanf("%s%lf%lf", name, &salary, &additional);

	double total = salary + (additional * 15) / 100;
	printf("TOTAL = R$ %.2lf\n", total);

	// printf("SALARY = U$ %.2f\n", (float) hours * salary);

	return 0;
}