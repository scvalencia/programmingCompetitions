#include <math.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100000

int main(int argc, char const *argv[]) {
	char* string = (char*) malloc(sizeof(char) * MAX_SIZE);
	scanf("%s", string);
	int count = strlen(string);
	int i = 0, wc = 0, uc = 0, lc = 0, sc = 0;

	for(; i < count; i++) {
		char current = *(string + i);

		if(current == '_')
			wc++;
		else if(isupper(current))
			uc++;
		else if(islower(current))
			lc++;
		else
			sc++;
	}

	double len = count + 0.0;
	double wr = wc / len, lr = lc / len, ur = uc / len, sr = sc / len;

	printf("%.7lf\n", wr);
	printf("%.7lf\n", lr);
	printf("%.7lf\n", ur);
	printf("%.7lf\n", sr);

	return 0;
}