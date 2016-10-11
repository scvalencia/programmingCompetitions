#include <math.h>
#include <stdio.h>

#define MATH_PI 3.141592653589793

struct center {
	double x, y;
};

struct center solve(double x1, double y1, double x2, double y2, double x3, double y3) {

	double c1 = 2.0 * x2 - 2 * x1;
	double c2 = 2.0 * y2 - 2 * y1;
	double c3 = 2.0 * x3 - 2 * x2;
	double c4 = 2.0 * y3 - 2 * y2;

	double r1 = (x2 * x2 + y2 * y2) - (x1 * x1 + y1 * y1);
	double r2 = (x3 * x3 + y3 * y3) - (x2 * x2 + y2 * y2);

	double a = 0.0, b = 0.0;
	b = r2 - (r1 * c3 / c1);
	b /= (c4 - (c2 * c3 / c1));
	a = (r1 - b * c2) / c1;

	struct center ans;
	ans.x = a;
	ans.y = b;

	return ans;

}

double getRadius(struct center cntr, double x1, double y1) {
	double a1 = (x1 - cntr.x), a2 = (y1 - cntr.y);
	return sqrt(a1 * a1 + a2 * a2);
}

void displayCenter(struct center cntr) {
	printf("%f %f\n", cntr.x, cntr.y);
}

int main(int argc, char const *argv[]) {

	double x1, y1, x2, y2, x3, y3;

	while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF) {

		struct center cntr = solve(x1, y1, x2, y2, x3, y3);
		printf("%.2lf\n", getRadius(cntr, x1, y1) * 2 * MATH_PI);

	}

	return 0;
}