#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool process(char first, char second) {
	if(first == 'p' && second == 'q')
		return true;
	else if(first == 'q' && second == 'p')
		return true;
	else if(first == 'b' && second == 'd')
		return true;
	else if(first == 'd' && second == 'b')
		return true;
	else
		return false;
}

int main(int argc, char const *argv[]) {
	size_t size = 2;
	char* input;
	printf("Ready\n");
	while(true) {
		getline(&input, &size, stdin);
		char first = input[0], second = input[1];
		if(first == ' ' && second == ' ')
			break;
		bool ans = process(first, second);
		if(ans) {
			printf("Mirrored pair\n");
		}
		else if(!ans) {
			printf("Ordinary pair\n");
		}
	} 
	return 0;
}