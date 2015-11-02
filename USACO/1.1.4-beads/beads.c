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

void process(char* string, int position, char* new_string) {
    char* aux = (char*) malloc(sizeof(char) * SIZE);
    strncpy(new_string, string + position, strlen(string));
    strncpy(aux, string, position);
    strcat(new_string, aux);
}

int count(char* string) {
    int sum = 0, i  = 0,  j = 0;
    char ch;

    for(; i < strlen(string); i++) {
        if(string[i] == 'w')
            sum++;
        else {
            ch = string[i];
            for(j = i; j < strlen(string); j++)
                if(string[j] == ch || string[j] == 'w')
                    sum++;
                else
                    break;
            break;
        }
    }

    if(sum > strlen(string))
        sum = strlen(string);

    return sum;
}


int main(int argc, char const *argv[]) {
    FILE *fin  = fopen("beads.in", "r");
    FILE *fout = fopen("beads.out", "w");

    char* string  = (char*) malloc(sizeof(char) * SIZE);
    char* new_string = (char*) malloc(sizeof(char) * SIZE);
    int N;

    fscanf(fin, "%d", &N);
    fscanf(fin, "%s", string);

    int max = -1, i = 0, m;
    for(; i < strlen(string); i++) {
        process(string, i, new_string);
        m = count(new_string);
        max = MAX(max, m);
    }

    printf("%d\n", max);    
    free(string);
    free(new_string);
    return 0;
}