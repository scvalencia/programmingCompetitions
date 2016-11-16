#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n;
	char* string = (char*) malloc(sizeof(char) * 15);
	scanf("%d %s", &n, string);
	printf("%d\n%s\n", n * 2, string);
	return 0;
}