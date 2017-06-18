#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
	double radius;
	scanf("%lf", &radius);
	printf("A=%.4lf\n", 3.14159 * radius * radius);
	return 0;
}