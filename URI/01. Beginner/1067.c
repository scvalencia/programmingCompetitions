#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, i = 1;
	scanf("%d", &n);

	for(; i <= n; i++)
		if(i % 2 != 0)
			printf("%d\n", i);

	return 0;
}