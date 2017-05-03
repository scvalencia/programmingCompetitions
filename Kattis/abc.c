#include <stdio.h>
#define CMP(a, b, c) ((a) < (b)) && ((b) < (c))

int main(int argc, char const *argv[]) {

	int n1, n2, n3;
	char c1, c2, c3;

	scanf("%d %d %d\n", &n1, &n2, &n3);
	scanf("%c%c%c", &c1, &c2, &c3);

	int a, b, c;

	if(CMP(n1, n2, n3)) {
		a = n1; b = n2; c = n3;
	} else if(CMP(n1, n3, n2)) {
		a = n1; b = n3; c = n2;
	} else if(CMP(n2, n1, n3)) {
		a = n2; b = n1; c = n3;
	} else if(CMP(n2, n3, n1)) {
		a = n2; b = n3; c = n1;
	} else if(CMP(n3, n1, n2)) {
		a = n3; b = n1; c = n2;
	} else if(CMP(n3, n2, n1)) {
		a = n3; b = n2; c = n1;
	}

	int array[] = {a, b, c};
	printf("%d %d %d\n", array[c1 - 'A'], array[c2 - 'A'], array[c3 - 'A']);
	return 0;
}