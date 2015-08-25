#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LETTERS 26
#define LINE_SIZE 100

void print_histgram(int* array, int size, int* max) {
	int i = 0;
	while(*max != 0) {
		for(i = 0; i < size; i++) {
			if(*(array + i) == *max) {
				printf("*");
				--(*(array + i));
			}
			else
				printf(" ");
			if(i < size - 1)
				printf(" ");
		}
		(*max)--;
		printf("\n");
	}

	for(i = 0; i < size; i++)
		if(i < size - 1)
			printf("%c ", i + 65);
		else
			printf("%c", i + 65);
}

int main(int argc, char const *argv[]) {
	int* array = calloc(LETTERS, sizeof(int));
	char ch;

	int line_count = 0, i = 0, current = 0, max = 0;

	while ((ch = getchar()) != EOF) {
		if (isalpha(ch))
    		current = ++array[ch - 65];
    	max = (current > max) ? current : max;
	}

	print_histgram(array, LETTERS, &max);
	printf("\n");

	free(array);

	return 0;
}