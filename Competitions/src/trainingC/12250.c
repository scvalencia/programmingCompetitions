#include <stdio.h>
#include <string.h>
#define N 100

int main(int argc, char **argv) {
	char input[N];
	scanf("%s", input);
	int cases = 1;
	while(strcmp(input, "#") != 0) {
		if(strcmp(input, "HELLO") == 0)
			printf("Case %d: ENGLISH\n", cases);
		else if(strcmp(input, "HOLA") == 0)
			printf("Case %d: SPANISH\n", cases);
		else if(strcmp(input, "HALLO") == 0)
			printf("Case %d: GERMAN\n", cases);
		else if(strcmp(input, "BONJOUR") == 0)
			printf("Case %d: FRENCH\n", cases);
		else if(strcmp(input, "CIAO") == 0)
			printf("Case %d: ITALIAN\n", cases);
		else if(strcmp(input, "ZDRAVSTVUJTE") == 0)
			printf("Case %d: RUSSIAN\n", cases);
		else 
			printf("Case %d: UNKNOWN\n", cases);
		cases++;
		scanf("%s", input);
	}
	return 0;
}