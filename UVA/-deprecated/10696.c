#include <stdio.h>

int f91(int n) {
	if(n <= 100)
		return f91(f91(n + 11));
	else
		return n - 10;
}

int main(int argc, char *argv[]) {
	int n;
	while(scanf("%d", &n) == 1 && n)		
		printf("f91(%d) = %d\n", n, f91(n));
	return 0;
}