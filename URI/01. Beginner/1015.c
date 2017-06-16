#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
	double x1, y1, x2, y2;
	scanf("%lf%lf", &x1, &y1);
	scanf("%lf%lf", &x2, &y2);
	printf("%.4lf\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
	return 0;
}