#include <stdio.h>

int main(int argc, char const *argv[]) {

	int n, c = 1;
	while(scanf("%d", &n) != EOF) {
		int i = 0, current = 0, max = -2000000, min = 2000000, range;

		for(; i < n; i++) {
			scanf("%d", &current);
			if(current > max)
				max = current;
			if(current < min)
				min = current;
		}

		range = max - min;

		printf("Case %d: %d %d %d\n", c++, min, max, range);
	}

	return 0;
}