#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void getNeighbors(int n, int i, int* n1, int* n2) {
	if(i == 0) {
		*n1 = n - 1;
		*n2 = 1;
	} else if(i == n - 1) {
		*n1 = n - 2;
		*n2 = 0;
	} else {
		*n1 = i - 1;
		*n2 = i + 1;
	}
}

bool isPeak(int value, int n1, int n2) {
	if((n1 > value && n2 > value) || (n1 < value && value > n2))
		return true;
	else
		return false;
}

int main(int argc, char const *argv[]) {
	int n, i, *array, value, n1, n2, peaks;
	scanf("%d", &n);
	while(n != 0) {
		array = malloc(n * sizeof(int));
		peaks = 0;
		for(i = 0; i < n; i++)
			scanf("%d", array + i);
		if(n == 2) {
			peaks = 2;
			goto REPORT_ANS;
		}
		for(i = 0; i < n; i++) {
			getNeighbors(n, i, &n1, &n2);
			value = *(array + i);
			n1 = *(array + n1);
			n2 = *(array + n2);
			if(isPeak(value, n1, n2))
				peaks++;
		}
		REPORT_ANS:
			printf("%d\n", peaks);
		scanf("%d", &n);
	}
	return 0;
}