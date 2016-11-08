#include <stdio.h>

int main(int argc, char const *argv[]) {

	int n;
	scanf("%d", &n);

	printf("%s\n", (n % 2 == 0) ? "Bob" : "Alice");

	return 0;
}