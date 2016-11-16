#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	char* string = (char*) malloc(sizeof(char) * 100);
	int* count = (int*) malloc(sizeof(int) * 10), i;
	gets(string);

	for(i = 0; i < 10; i++)
		*(count + i) = 0;

	for(i = 0; i < strlen(string); i++)
		count[*(string + i) - '0']++;

	for(i = 0; i < 10; i++)
		printf("%d %d\n", i, *(count + i));

	return 0;
}