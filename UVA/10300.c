#include <stdio.h>

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int farmers, sum = 0;
		scanf("%d", &farmers);
		while(farmers--) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			sum += a * c;
		}
		printf("%d\n", sum);
	}
	return 0;
}