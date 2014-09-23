#include <stdio.h>

int process(int n) {
	int a = (((((n * 567) / 9) + 7492) * 235)/ 47) - 498;
	return (a < 0) ? -((a / 10) % 10) : ((a / 10) % 10);
}

int main(void) {
	int test_cases, n;
	scanf("%d", &test_cases);
	while(test_cases--) {
		scanf("%d", &n);
		int ans = process(n);
		printf("%d\n", ans);
	}
}