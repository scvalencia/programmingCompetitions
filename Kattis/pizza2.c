#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

	int r, c;
	scanf("%d %d", &r, &c);

	printf("%.7f\n", (c > r) ? 0.0 : pow((10 * (r - c)) / r, 2));
	return 0;
}