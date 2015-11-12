/*
ID: **.****#
LANG: C
TASK: palsquare
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char base_digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

char* to_base(long int number, int base) {
    int *converted;
    char *ans_number;
    int next_digit, index = 0, i = 0;

    converted = (int *) malloc(64 * sizeof(int));
    ans_number = (char *) malloc(64 * sizeof(char));

    while (number != 0) {
        converted[index] = number % base;
        number = number/ base;
        ++index;
    }

    index--;
    for(; index >= 0; index--) {
        ans_number[i++] = base_digits[converted[index]] ;
    }

   return ans_number;
}

char* strrev(char *str) {
      char *p1, *p2;

      if (! str || ! *str)
            return str;

      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
            *p1 ^= *p2; *p2 ^= *p1; *p1 ^= *p2;
      }

      return str;
}

bool palindromic(char* word) {
    char *aux = (char*) malloc(strlen(word) + 100 * sizeof(char));

    strcpy(aux, word);
    aux = strrev(aux);
 
    return (strcmp(aux, word) == 0);
}

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen ("palsquare.in", "r");
    FILE *fout = fopen ("palsquare.out", "w");

    int base;
    fscanf (fin, "%d", &base);

    int current = 1, square;
    while(current <= 300) {
        square = current * current;
        char* current_word = to_base(current, base);
        char* square_word = to_base(square, base);

        if(palindromic(square_word))
            fprintf (fout, "%s %s\n", current_word, square_word);

        current++;
    }

    return 0;
}