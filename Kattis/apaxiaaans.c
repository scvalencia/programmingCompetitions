#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 300

int main(int argc, char const *argv[]) {

	int i, j;
	char* string = (char*) malloc(sizeof(char) * SIZE);

	scanf("%s", string);

	for(i = 0; i < strlen(string) - 1; i++) {
		printf("%c", string[i]);
		while(string[i] == string[i + 1])
			i++;
	}

	printf("%c\n", string[i]);

	return 0;
}