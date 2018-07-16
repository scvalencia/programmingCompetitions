#include <stdio.h>
#include <string.h>

int main(void) {
	int TC, len;		
	char input[1024];
	scanf("%d", &TC);
	while(TC--) {	
		scanf("%s", input);
		len = (int) strlen(input);
		if(!strcmp(input, "1") || !strcmp(input, "4") || !strcmp(input, "78"))
			printf("+\n");
		else if (input[len - 1] == '5' && input[len - 2] == '3')
			printf("-\n");
		else if (input[0] == '9' && input[len - 1] == '4')
			printf("*\n");
		else if (input[0] == '1' && input[1] == '9' && input[2] == '0')
			printf("?\n");
		else
			printf("+\n");
	}
	return 0;
}