#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv) {
	int input;
	int cases = 1;
	scanf("%d", &input);
	while(input != 0) {		
		int supposed = 0;
		int actually = 0;
		while(input--) {
			int flag;
			scanf("%d", &flag);
			if(flag != 0)
				supposed++;
			else
				actually++;			
		}
		printf("Case %d: %d\n", cases, (supposed - actually));
		cases++;
		scanf("%d", &input);
	}
	return 0;
}