#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main(int argc, char const *argv[]) {

	char* string = (char*) malloc(sizeof(char) * MAX_LENGTH);
	scanf("%s", string);

	int sum = 0, i = 0;

	for(; i < strlen(string); i++) {
		char ch = *(string + i);
		sum += ch - 'a' + 1;
	}

	printf("%d\n", sum);

	return 0;
} 