#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 10000000
#define ALPHABET 30

const int H = 2, A = 2, C = 1, K = 1, E = 2, R = 2, T = 1;

int main(int argc, char const *argv[]) {

	int n, i;
	scanf("%d", &n);
	char* string = (char*) malloc(sizeof(char) * MAX_LENGTH);
	int* frequencies = (int*) malloc(sizeof(char) * ALPHABET);
	scanf("%s", string);

	

	for(i = 0; i < ALPHABET; i++)
		*(frequencies + i) = 0;

	for(i = 0; i < strlen(string); i++) {
		char ch = *(string + i);
		frequencies[ch - 'a'] += 1;
	}

	printf("%c %d\n", 'h', *(frequencies + ('h' - 'a')));
	printf("%c %d\n", 'a', *(frequencies + ('a' - 'a')));
	printf("%c %d\n", 'c', *(frequencies + ('c' - 'a')));
	printf("%c %d\n", 'k', *(frequencies + ('k' - 'a')));
	printf("%c %d\n", 'e', *(frequencies + ('e' - 'a')));
	printf("%c %d\n", 'r', *(frequencies + ('r' - 'a')));
	printf("%c %d\n", 't', *(frequencies + ('t' - 'a')));

	return 0;
} 