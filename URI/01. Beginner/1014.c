#include <stdio.h>

int main(int argc, char const *argv[]) {
	int kms;
	double consumption;

	scanf("%d%lf", &kms, &consumption);
	printf("%.3lf km/l\n", ((double) kms) / consumption);
	return 0;
}