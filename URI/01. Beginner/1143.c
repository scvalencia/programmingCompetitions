#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, i = 1;
	scanf("%d", &n);

	while(n--) {
		printf("%d %d %d\n", i, i * i, i * i * i);
		i++;
	}

	return 0;
}