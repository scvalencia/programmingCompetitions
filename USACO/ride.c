/*
ID: sc.vale2
LANG: C
PROG: ride
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

int hash(char* word) {
	int i = 0, ans = 1;
	for(; i < strlen(word); i++)
		ans *= ((int) *(word + i) - 65 + 1);
	return ans;
}

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen("ride.in", "r");
    FILE *fout = fopen("ride.out", "w");

    char* word1 = (char*) malloc(sizeof (char) * SIZE); 
    char* word2 = (char*) malloc(sizeof (char) * SIZE);

    fscanf(fin, "%s", word1);
    fscanf(fin, "%s", word2);

    fprintf(fout, "%s\n", (hash(word1) % 47 == hash(word2) % 47) ? "GO" : "STAY");

    free(word1);
    free(word2);
    return 0;
}