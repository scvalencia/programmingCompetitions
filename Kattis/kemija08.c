#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {

	int i = 0;
	char* string = (char*) malloc(sizeof(char) * 110);
	gets(string);

	for(; i < strlen(string);) {
		char ch = *(string + i);
		printf("%c", ch);

		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			i += 2;	
		
		i++;		
	}

	printf("\n");

	return 0;
}