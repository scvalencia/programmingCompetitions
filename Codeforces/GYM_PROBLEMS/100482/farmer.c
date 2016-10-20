#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int TC, i = 1;
	scanf("%d", &TC);

	while(TC--) {
		int x1, y1, x2, y2, x3, y3, x4, y4;
		int unitaryPrice;

		scanf("%d %d %d %d %d %d %d %d %d", 
			&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &unitaryPrice);

		float area = abs(x1*y2 + x2*y3 + x3*y4 + x4*y1 - 
			(x2*y1 + x3*y2 + x4*y3) - x1*y4);

		area /= 2.0;

		printf("Case #%d: %.2f\n", i++, unitaryPrice / area);
	}

	return 0;
}