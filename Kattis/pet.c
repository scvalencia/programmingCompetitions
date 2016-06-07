#include <stdio.h>
#define CASES 5

int main(int argc, char const *argv[]) {
	int TC = CASES;
	int n1, n2, n3, n4, sum, max = 0, idx = 0;
	while(TC--) {
		scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
		sum = n1 + n2 + n3 + n4;
		if(sum > max) {
			idx = CASES - TC;
			max = sum;
		}
	}
	printf("%d %d\n", idx, max);
	return 0;
}