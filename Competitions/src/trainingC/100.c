#include <stdio.h>

int collatz_cycle(int n) {
	int cycle = 1;
	while(n != 1) {
		if(n % 2 == 0)
			n = n/2;
		else
			n = n * 3 + 1;
		cycle++;
	}
	return cycle;
}

int max_cycle(int a, int b) {
	if(a > b) {
		int t = a;
		a = b;
		b = t;
	}
	int maxCycle = collatz_cycle(a);
	int i;
	for(i = a + 1; i <= b; i++) {
		int cycle = collatz_cycle(i);
		if(cycle > maxCycle)
			maxCycle = cycle;
	}
	return maxCycle;
}

int main(int argc, char const *argv[]) {
	int i, j;
	while(scanf("%d %d", &i, &j) != EOF)
		printf("%d %d %d\n", i, j, max_cycle(i, j));
	return 0;
}