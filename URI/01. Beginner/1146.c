#include <stdio.h>

int main(int argc, char const *argv[]) {
	int x, i;

	while((scanf("%d", &x)) && x != 0) {
		for(i = 1; i <= x; i++)
			printf("%d%c", i, (i == x) ? '\n' : ' ');
	}

	return 0;
}