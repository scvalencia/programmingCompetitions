#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 20
#define STRING_SIZE 12

int main(int argc, char const *argv[]) {

	char names[MAX_SIZE][STRING_SIZE];
	int words, size, i = 0;
	scanf("%d", &words);
	size = words;

	while(words--) {
		scanf("%s", names[i++]);
	}

	bool increasing = true;
	bool decreasing = true;

	for(i = 0; i < size - 1; i++) {
		char* curr = names[i];
		char* next = names[i + 1];

		int flag = strcmp(curr, next);

		if(flag > 0)
			increasing = false;
		else if(flag < 0)
			decreasing = false;
	}

	if(!(increasing || decreasing))
		printf("NEITHER\n");
	else if(increasing)
		printf("INCREASING\n");
	else
		printf("DECREASING\n");

	return 0;
}