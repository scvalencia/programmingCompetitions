#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MINMAX(n) (n) ? "YES" : "NO"

int main(int argc, char const *argv[]) {
	int n, i, idx, min = 2000, max = -2000;
	bool* numbers = (bool*) malloc(sizeof(bool) * 110);
	bool ans = true;

	for(i = 0; i < n; i++)
		*(numbers + i) = 0;

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		scanf("%d", &idx);
		*(numbers + idx) += 1;
		if(idx > max) max = idx;
		if(idx < min) min = idx;
	}

	for(i = min; i < max && ans; i++)
		ans = ans && *(numbers + i);

	printf("%s\n", MINMAX(ans));
	return 0;
}