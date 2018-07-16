#include <stdio.h>

int solve(int array[], int n, int average);

int main(int argc, char const *argv[]) {
	int n, ans, cases = 1;
	while(1) {
		scanf("%d", &n);
		if(n == 0)
			break;
		int array[n], total = 0, i = 0;
		while(i < n) {
			scanf("%d", &array[i]);
			total += array[i++];
		}
		printf("Set #%d\n", cases++);
		printf("The minimum number of moves is %d.\n\n", solve(array, n, total / n));
	}
	return 0;
}

int solve(int array[], int n, int average) {
	int i, ans = 0;
	for(i = 0; i < n; i++)
		if(array[i] > average)
			ans += array[i] - average;
	return ans;
}