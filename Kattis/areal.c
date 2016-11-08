#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
	long long int area;
	scanf("%lld", &area);
	printf("%.7f\n", sqrt(area) * 4.0);
	return 0;
}