#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int n;
	while(true) {
		scanf("%d", &n);
		if(n == 42)
			break;
		printf("%d\n", n);		
	}
	return 0;
}