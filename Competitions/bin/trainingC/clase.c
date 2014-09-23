#include <stdio.h>
int main(void) {
	int bits = 1010101;
	printf("%d\n", bits);
	printf("%d\n", bits ~ 10101010);
}
