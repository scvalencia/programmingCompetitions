#include <math.h>
#include <stdio.h>

#define PI 3.14159265359

int main(int argc, char const *argv[]) {

	int radius;
	scanf("%d", &radius);

	printf("%.7f\n", PI * pow(radius, 2.0));
	printf("%.7f\n", 2 * pow(radius, 2.0));

	return 0;
}