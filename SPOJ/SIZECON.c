#include <stdio.h>
int main(void) {
	int TC, n;
	scanf("%d", &TC);
	int ans = 0;
	while(TC--) {
		scanf("%d", &n);
		ans = (n > 0)? ans + n : ans + 0;
	}
	printf("%d\n", ans);
	return 0;
}