#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	int r, c;
	scanf("%d %d", &r, &c);

	if(r == c)
		printf("too late\n");

	else {
		bool* rooms = (bool*) malloc(sizeof(bool) * (r + 1));
		int i = 0;
		for(; i < (r + 1); i++)
			*(rooms + i) = false;

		for(i = 0; i < c; i++) {
			int current;
			scanf("%d", &current);
			*(rooms + current) = true;
		}

		for(i = 1; i < (r + 1); i++)
			if(!(*(rooms + i))) {
				printf("%d\n", i);
				break;
			}
	}

	return 0;
}