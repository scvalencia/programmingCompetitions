#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* circles;

bool isInside(int x, int y, int radius) {
	return (pow(x, 2) + pow(y, 2)) <= pow(radius, 2); 
}

int solve(int x, int y) {
	int count = 1, i = 0;

	for(; i < 10; i++) {
		int radius = *(circles + i);
		if(isInside(x, y, radius))
			break;
		count++;
	}

	return (count > 12) ? 0 : (11 - count);
}

int main(int argc, char const *argv[]) {
	circles = (int*) malloc(sizeof(int) * 10);

	int radius = 20, i = 0;
	for(; radius <= 200; radius += 20, i++)
		*(circles + i) = radius;

	int testcases;
	scanf("%d", &testcases);

	while(testcases--) {
		int darts, i = 0, ans = 0;
		scanf("%d", &darts);
		
		for(; i < darts; i++) {
			int x, y;
			scanf("%d %d", &x, &y);
			ans += solve(x, y);
		}

		printf("%d\n", ans);
	} 

	return 0;
}