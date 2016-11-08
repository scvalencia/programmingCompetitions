#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 310

int main(int argc, char const *argv[]) {
	char* string = (char*) malloc(sizeof(char) * MAX_SIZE);
	scanf("%s", string);

	int i, ans = 0;

	for(i = 0; i < strlen(string); i += 3) {
		if(string[i] != 'P') 
			ans++;
		if(string[i + 1] != 'E') 
			ans++;
		if(string[i + 2] != 'R') 
			ans++;
	}

	printf("%d\n", ans);
	return 0;
}