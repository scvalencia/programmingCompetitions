#include <stdio.h>
#include <string.h>
#define N 100

int main(int argc, char **argv) {
	char input[N];
	scanf("%s", input);
	int cases = 1;
	while(strcmp(input, "*") != 0) {
		if(strcmp(input, "Hajj") == 0)
			printf("Case %d: Hajj-e-Akbar\n", cases);
		else if(strcmp(input, "Umrah") == 0)
			printf("Case %d: Hajj-e-Asghar\n", cases);
		cases++;
		scanf("%s", input);
	}
	return 0;
}