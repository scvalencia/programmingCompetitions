#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359

void solve(double r, int m, int c) {
	double area = PI * r * r;
	double estimated = (c * pow(2 * r, 2)) / (m + 0.0);

	printf("%.6f %.6f\n", area, estimated);
}

int main(int argc, char const *argv[]) {

	double r;
	int m, c;

	while((scanf("%lf %d %d", &r, &m, &c)) && (r != 0 && m != 0 && c != 0))
		solve(r, m, c);

	return 0;
}