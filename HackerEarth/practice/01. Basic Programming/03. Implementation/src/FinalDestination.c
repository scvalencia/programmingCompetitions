#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 10000000

int main(int argc, char const *argv[]) {

	char* string = (char*) malloc(sizeof(char) * MAX_LENGTH);
	scanf("%s", string);

	int col = 0, row = 0, i = 0;

	for(; i < strlen(string); i++) {
		char ch = *(string + i);
		switch(ch) {

			case 'L':
				col--;
				break;
			case 'R':
				col++;
				break;
			case 'U':
				row++;
				break;
			case 'D':
				row--;
				break;

		}
	}

	printf("%d %d\n", col, row);

	return 0;
} 