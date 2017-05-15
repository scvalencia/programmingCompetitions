#include <stdio.h>

int main(int argc, char const *argv[]) {

	int x, n, accumulate = 0;
	scanf("%d %d", &x, &n);

	while(n--) {
		int used;
		scanf("%d", &used);
		accumulate += x - used;
	}

	accumulate += x;
	printf("%d\n", accumulate);

	return 0;
}