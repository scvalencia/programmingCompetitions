#include <stdio.h>
#include <stdbool.h>

int main(void) {
	char input;
	bool open = false;
	while(scanf("%c", &input) != EOF) {
		if(input == '\"' && !open) {
			printf("``");
			open = true;
		}
		else if(input == '\"' && open) {
			printf("''");
			open = false;
		}
		else
			printf("%c", input);
	}
	return 0;
}