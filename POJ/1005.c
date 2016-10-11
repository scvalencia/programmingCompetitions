#include <math.h>
#include <stdio.h>

#define PI 3.14159265

int main(int argc, char const *argv[]) {
	int TC, i = 1;
	float x, y;
	double ans;

	scanf("%d", &TC);
	while(TC--) {
		scanf("%f %f", &x, &y);
		ans = (x * x + y * y) * PI / 2 / 50;
		printf("Property %d: This property will begin eroding in year %d.\n", i++, (int) ceil(ans));
	}

	printf("END OF OUTPUT.\n");
	return 0;
}