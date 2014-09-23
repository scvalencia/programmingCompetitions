#include <stdio.h>
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define ABS(n) (n < 0)? -n : n

int main(int argc, char **argv) {
	int a, b;
	while(scanf("%d %d", &a, &b) == 2 && a != -1 && b != -1) {
		int difference = ABS(MAX(a, b) - MIN(a, b));
		int ans = (difference >= 50)? 100 - difference : difference;
		printf("%d\n", ans);

	}
	return 0;
}