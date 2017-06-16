#include <math.h>
#include <stdio.h>

#define PI 3.14159
#define CONST (4.0 / 3.0)

double sphereArea(int radius) {
	return CONST * PI * pow(radius, 3);
}

int main(int argc, char const *argv[]) {
	int radius;
	scanf("%d", &radius);
	printf("VOLUME = %.3lf\n", sphereArea(radius));

	return 0;
}