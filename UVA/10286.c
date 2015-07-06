#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]) {

	double pentagonSide = 0.0, constant = sin(108*(M_PI/180)) / sin(63*(M_PI/180));

	while(scanf("%lf", &pentagonSide) != EOF)
		printf("%.10lf\n", constant * pentagonSide);

	return 0;
}