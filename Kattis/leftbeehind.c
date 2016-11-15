#include <stdio.h>

int main(int argc, char const *argv[]) {

	int sweet, sour, sum;
	scanf("%d %d", &sweet, &sour);

	while(!(sweet == 0 || sour == 0)) {
		
		sum = sweet + sour;

		if(sum == 13)
			printf("Never speak again.\n");
		else if(sweet > sour)
			printf("To the convention.\n");
		else if(sour > sweet)
			printf("Left beehind.\n");
		else
			printf("Undecided.\n");

		scanf("%d %d", &sweet, &sour);
	}

	return 0;
}