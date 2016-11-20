#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100000

int main(int argc, char const *argv[]) {
	char* string = (char*) malloc(sizeof(char) * MAX_LEN);
	char* palindrome = (char*) malloc(sizeof(char) * MAX_LEN);
	int* alphabet = (int*) malloc(sizeof(int) * 26);

	int i = 0;
	for(; i < 26; i++)
		alphabet[i] = 0;

	scanf("%s", string);
	long long int length = strlen(string);

	for(i = 0; i < length; i++) {
		char ch = *(string + i);
		int idx = ch - 97;
		alphabet[idx]++;
	}

	int init = 0, end = length - 1;
	i = 0;
	while(init < end) {
		
	}
	for(i = 0; i < 26; i++) {
		printf("%d\n", alphabet[i]);
	}


	return 0;
}