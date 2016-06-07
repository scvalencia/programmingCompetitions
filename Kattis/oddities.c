#include <stdio.h>

int main(int argc, char const *argv[]) {
	int TC, n;
	scanf("%d", &TC);

	while(TC--) {
		scanf("%d", &n);
		printf("%d is %s\n", n, (n % 2 == 0) ? "even" : "odd");
	}
	return 0;
}