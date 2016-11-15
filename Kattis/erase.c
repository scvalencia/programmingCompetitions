#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int overwrites;
	scanf("%d", &overwrites);

	char* original = (char*) malloc(sizeof(char) * 100);
	scanf("%s", original);

	char* altered = (char*) malloc(sizeof(char) * 100);
	scanf("%s", altered);

	int i = 0, j = 0;
	bool flag = false;

	for(; i < strlen(original); i++) {
		char ori = *(original + i);
		char alt = *(altered + i);

		for(j = 0; j < overwrites; j++)
			ori = (ori == '1') ? '0' : '1';

		if(alt != ori) {
			flag = true;
			break;
		}
	}

	if(!flag)
		printf("Deletion succeeded\n");
	else
		printf("Deletion failed\n");
	

	return 0;
}