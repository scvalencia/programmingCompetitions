#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 100

int main(int argc, char const *argv[]) {

	int i;
	bool sorry = false;
	char* bitstring = (char*) malloc(sizeof(char) * MAX_LENGTH);
	scanf("%s", bitstring);

	for(i = 0; i < strlen(bitstring); i++) {
		char ch = *(bitstring + i);
		int count = 1;
		while(count < 6)
			if(*(bitstring + ++i) == ch)
				count++;
			else
				break;

		if(count >= 5) {
			sorry = true;
			break;
		}
	}

	printf("%s\n", (sorry) ? "Sorry, sorry!" : "Good luck!");
	return 0;
} 