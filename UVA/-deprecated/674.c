#include <stdio.h>
#define MAX_BOUND 7489
unsigned long ways[MAX_BOUND + 1];

void populate(void) {
	int coins[] = {1, 5, 10, 25, 50};
	ways[0] = 1;
	int i, j;
	for(i = 0; i < 5; i++)
		for(j = coins[i]; j <= MAX_BOUND; j++)
			ways[j] += ways[j - coins[i]];

}

int main(int argc, char **argv) {
	int input;
	populate();
	while(scanf("%d", &input) != EOF)
		printf("%lu\n", ways[input]);

	return 0;

}