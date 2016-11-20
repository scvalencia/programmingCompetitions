/*
 * REFERENCE: http://www.geeksforgeeks.org/find-subarray-with-given-sum/
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);

	while(TC--) {
		int n, size;
		long x, i, start = 0;
		scanf("%d %ld", &n, &x);
		bool done = false;
		size = n;
		int* array = (int*) malloc(sizeof(int) * n);

		i = 0;
		while(size--)
			scanf("%d", array + (i++));

		long current = *(array + 0);

		for(i = 1L; i <= n; i++) {
			while(current > x && start < i - 1) {
				current -= *(array + start);
				start++;
			}

			if(current == x) {
				done = true;
				break;
			}

			if (i < n)
          		current += *(array + i);
		}

		printf("%s\n", done ? "YES" : "NO");
	}

	return 0;
}