#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

char aseq[] = {'A', 'B', 'C'};
char bseq[] = {'B', 'A', 'B', 'C'};
char gseq[] = {'C', 'C', 'A', 'A', 'B', 'B'};

int main(int argc, char const *argv[]) {

	int questions, i = 0, max = 0;
	int ac = 0, bc = 0, gc = 0;
	int am = 0, bm = 0, gm = 0;
	scanf("%d", &questions);
	char* string = (char*) malloc(sizeof(char) * MAX_SIZE);
	scanf("%s", string);

	for(i = 0; i < strlen(string); i++) {

		if(*(string + i) == *(aseq + am))
			ac++;
		if(*(string + i) == *(bseq + bm))
			bc++;
		if(*(string + i) == *(gseq + gm))
			gc++;

		am = (am + 1) % 3;
		bm = (bm + 1) % 4;
		gm = (gm + 1) % 6;

	}

	max = MAX(ac, MAX(bc, gc));

	printf("%d\n", max);

	if(max == ac)
		printf("Adrian\n");
	if(max == bc)
		printf("Bruno\n");
	if(max == gc)
		printf("Goran\n");

	return 0;
}