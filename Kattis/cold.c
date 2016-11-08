#include <stdio.h>

int main(int argc, char const *argv[]) {

	int n, c, i = 0, count = 0;
	scanf("%d", &n);

	while(i++ < n) {
		scanf("%d", &c);
		if(c < 0) count++;
	}

	printf("%d\n", count);
	return 0;
}