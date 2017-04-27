#include <stdio.h>

int main(int argc, char const *argv[]) {
	int num = 1, den = 1;
	while(scanf("%d %d", &num, &den) && 
		(num + den != 0)) {
			printf("%d %d / %d\n", (num / den), (num % den), den);
	}
	
	return 0;
}