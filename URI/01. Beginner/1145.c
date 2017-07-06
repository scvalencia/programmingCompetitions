#include <stdio.h>

int main(int argc, char const *argv[]) {
	int x, y;
	scanf("%d%d", &x, &y);

	int i = 1;

	while(i <= y) {
		printf("%d%c", i, (i % x == 0) ? '\n' : ' ');
		i++;
	}

	return 0;
}