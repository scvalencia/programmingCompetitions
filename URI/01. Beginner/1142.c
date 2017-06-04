#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, i = 1;
	scanf("%d", &n);

	while(n--) {
		printf("%d %d %d PUM\n", i, i + 1, i + 2);
		i += 4;
	}

	return 0;
}