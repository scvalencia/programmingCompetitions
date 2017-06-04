#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, i = 1;
	scanf("%d", &n);

	while(n--) {
		int ii = i * i;
		int iii = ii * i;

		printf("%d %d %d\n", i, ii, iii);
		printf("%d %d %d\n", i, ii + 1, iii + 1);

		i++;
	}

	return 0;
}