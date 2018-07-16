#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define SIZE 1000

int main(void) {
	char inp[SIZE], c;
	int i;
	while ((scanf("%s",inp)) != EOF) {
		c = getchar();
		for(i = strlen(inp) - 1 ;  i >= 0; i--) {
			printf("%c", inp[i]);
		}
		putchar(c); 
	}
	return 0;
}