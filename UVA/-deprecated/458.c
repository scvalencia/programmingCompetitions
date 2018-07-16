#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char message[1024];
	while(gets(message)) {		
		int len = strlen(message), i = 0;
		for(; i < len; i++)
			printf("%c", message[i] - 7);
		printf("\n");
	}
	return 0;
}