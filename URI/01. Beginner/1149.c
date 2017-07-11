#include <stdio.h>

int main(int argc, char const *argv[]) {
	int a, n = 0, i = 0, sum = 0;
	scanf("%d", &a);

	while(n <= 0) scanf("%d", &n); 

	for(sum = a, i = 1; i < n; i++)
		sum += ++a;

	printf("%d\n", sum);

	return 0;
}