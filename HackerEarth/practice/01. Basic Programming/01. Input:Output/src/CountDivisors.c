#include <stdio.h>

int main(int argc, char const *argv[]) {
	int l, r, k, i, ans = 0;
	scanf("%d %d %d", &l, &r, &k);

	while(l <= r) {
		if(l % k == 0) ans++;
		l++;
	}

	printf("%d\n", ans);
	return 0;
}