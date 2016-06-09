#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime(int n) {
	int i = 2;
	for(; i < n / 2; i++)
		if(n % i == 0)
			return false;
	return true;
}

int main(int argc, char const *argv[]) {
	int TC, n, i, count;
	int* a;
	int* b;
	scanf("%d", &TC);
	while(TC--) {
		scanf("%d", &n);
		count = 0;
		a = (int*) malloc(sizeof(int) * n);
		b = (int*) malloc(sizeof(int) * n);

		for (i = 2; i < (n / 2) + 1; i++) {
			if(prime(i) && prime(n - i)) {
				a[count] = i;
				b[count] = n - i;
				count++;
			}
		}

		printf("%d has %d representation(s)\n", n, count);
		for(i = 0; i < count; i++)
			printf("%d+%d\n", a[i], b[i]);
		printf("\n");

	}
	
	return 0;
}