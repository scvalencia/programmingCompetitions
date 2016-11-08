#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 60
#define EQUAL '.'
#define NEQUAL '*'

int main(int argc, char const *argv[]) {
	int TC;
	char* s1 = (char*) malloc(sizeof(char) * MAX_SIZE);
	char* s2 = (char*) malloc(sizeof(char) * MAX_SIZE);

	scanf("%d", &TC);

	while(TC--) {
		scanf("%s", s1);
		scanf("%s", s2);

		printf("%s\n%s\n", s1, s2);

		int i = 0;

		for(; i < strlen(s1); i++) {
			char c1 = s1[i], c2 = s2[i];
			if(c1 != c2)
				printf("%c", NEQUAL);
			else
				printf("%c", EQUAL);
		}

		printf("\n\n");
	}

	return 0;
}