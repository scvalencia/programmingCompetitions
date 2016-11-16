#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n;

	while(scanf("%d", &n) != EOF)
		if(n == 42)
			break;
		else
			printf("%d\n", n);
	
	return 0;
}