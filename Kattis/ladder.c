#include <math.h>
#include <stdio.h>
#include <stdbool.h>

#define PI 3.141592653

int main(int argc, char const *argv[]) {

	int angle, h;

	scanf("%d %d", &h, &angle);
	
	float rate = cos(angle * PI / 180);
	rate /= sin(angle * PI / 180);
	rate *= h;
	
	printf("%d\n", (int) ceil(sqrt(h * h + rate * rate)));
	return 0;
}