#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	double prices[] = {0.0, 4.0, 4.50, 5.00, 2.00, 1.50};
	int code, quant;
	scanf("%d%d", &code, &quant);

	printf("Total: R$ %.2lf\n", prices[code] * quant);
	return 0;
}