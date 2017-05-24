#include <stdio.h>

int main(int argc, char const *argv[]) {

	int a, b, c;
	char sign, equal;

	scanf("%d %c %d %c %d", &a, &sign, &b, &equal, &c);

	printf("%s\n", (a + b == c) ? "YES" : "NO");


	return 0;
}