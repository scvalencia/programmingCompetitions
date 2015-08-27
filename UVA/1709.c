#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX(a, b) ((a) > (b)) ? a : b

double* prices;
double p, a, b, c, d, n;

void populate() {
	int k = 1;
	for(; k <= n; k++)
		*(prices + k) = p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main(int argc, char const *argv[]) {

	prices = (double*) calloc(sizeof (double), 1000001);

	while(scanf("%lf %lf %lf %lf %lf %lf", &p, &a, &b, &c, &d, &n)) {
		populate();
		double ans = 0.0, max = *(prices + 1);
		int i = 2;
		for(; i <= n; i++)
			if(*(prices + i) > max)
				max = *(prices + i);
            else
            	ans = MAX(max - *(prices + i), ans);
        if(ans == 0)
        	printf("0.00\n");
        else
        	printf("%lf\n", ans);
	}
	return 0;
}