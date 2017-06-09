#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n = 100, current, max = 0, maxdx = 0, index = 1;

	while(n--) {
		scanf("%d", &current);

		if(current > max) {
			max = current;
			maxdx = index;
		}

		index++;
	}

	printf("%d\n%d\n", max, maxdx);

	return 0;
}