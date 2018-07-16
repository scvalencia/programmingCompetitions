#include <stdio.h>

int main(int argc, char *argv[]) {
	int v, t;
	while(scanf("%d %d", &v, &t) == 2)		
		printf("%d\n", v * 2 * t);
	return 0;
}