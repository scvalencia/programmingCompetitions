/*
ID: sc.vale2
LANG: C
PROG: beads
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 500
#define MAX(a, b) ((a) > (b)) ? (a) : (b)

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen("beads.in", "r");
    FILE *fout = fopen("beads.out", "w");

    char* string  = malloc(sizeof(char) * SIZE);
    bool* signals = malloc(sizeof(char) * SIZE);
    int N;

    fscanf(fin, "%d", &N);
    fscanf(fin, "%s", string);

    int i = 1, count_r = 0, count_b = 0, max_r = 0, max_b = 0, n = 0;
    char current, past;
    bool flag = true;

    for(; n <= 2 * N; n++) {

        past = string[(i - 1) % N];
        printf("%c\n", past);
        current = string[i % N];
        if((current == 'r' && past == current) || (current == 'w' && past == current))
            count_r++;
        else
            max_r = MAX(max_r, count_r);
    }

    for(i = 1, n = 0; n <= 2 * N; n++, i++) {

        past = string[(i - 1) % N];
        printf("%c\n", past);
        current = string[i % N];
        if((current == 'b' && past == current) || (current == 'w' && past == current))
            count_b++;
        else
            max_b = MAX(max_b, count_b);
    }

    printf("%d %d\n", max_r, max_b);

    free(string);


    return 0;
}