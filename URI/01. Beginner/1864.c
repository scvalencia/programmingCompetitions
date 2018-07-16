#include <stdio.h>

const char* SENTENCE = "LIFE IS NOT A PROBLEM TO BE SOLVED";

int main(int argc, char const *argv[]) {

    int i = 0, bound;
    scanf("%d", &bound);

    for(; i < bound; i++)
        printf("%c", SENTENCE[i]);

    printf("\n");

    return 0;
}
