#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	char string[110];
	scanf("%s", string);

	for(int i = 0; i < strlen(string); i++) {
		char* current = &string[i];

		if(isupper(*current))
			*current = tolower(*current);
		else if(islower(*current))
			*current = toupper(*current);

		printf("%c", *current);
	}

	printf("\n");
	return 0;
}