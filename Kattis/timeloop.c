#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, m = 1;
	scanf("%d", &n);

	while(n--)
		printf("%d Abracadabra\n", m++);

	return 0;
}