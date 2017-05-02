#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
	char* able = (char*) malloc(sizeof(char) * 1000);
	char* actual = (char*) malloc(sizeof(char) * 1000);

	scanf("%s", able);
	scanf("%s", actual);

	printf("%s\n", (strlen(able) < strlen(actual)) ? "no" : "go");
	return 0;
}