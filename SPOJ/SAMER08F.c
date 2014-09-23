#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n;
	scanf("%d", &n);
	while(n != 0) {
		printf("%d\n", n*(n + 1)*(2*n + 1)/6);
		scanf("%d", &n);
	}
	return 0;
}