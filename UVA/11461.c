#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	int i = 1;
	for(; i < 11; i++)
		printf("%f ", sqrt(i)*sqrt(i));
	printf("\n");
	return 0;
}