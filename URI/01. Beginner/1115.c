#include <stdio.h>

void classifyPoints(int x, int y) {

	if(x > 0 && y > 0)
		printf("primeiro\n");
	else if(x < 0 && y > 0)
		printf("segundo\n");
	else if(y < 0 && x < 0)
		printf("terceiro\n");
	else if(x > 0 && y < 0)
		printf("quarto\n");

}

int main(int argc, char const *argv[]) {

	int x, y;
	
	while(scanf("%d%d", &x, &y) && x != 0 && y != 0)
		classifyPoints(x, y);

	return 0;
}