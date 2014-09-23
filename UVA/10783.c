#include <stdio.h>

int sumOdds(int a, int b) {
	int i = a, sum = 0;
	for(; i <= b; i++)
		if(i % 2 == 1)
			sum += i;
	return sum;
}

int main(int argc, char *argv[]) {
	int TC;
	scanf("%d", &TC);
	int a, b, cases = 1;
	while(TC--) {
		scanf("%d\n%d", &a, &b);
		printf("Case %d: %d\n", cases, sumOdds(a, b));
		cases++;
	}
	return 0;
}