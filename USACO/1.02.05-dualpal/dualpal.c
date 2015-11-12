/*
ID: **.****#
LANG: C
TASK: dualpal
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char base_digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

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
    FILE *fin  = fopen ("dualpal.in", "r");
    FILE *fout = fopen ("dualpal.out", "w");

    int a, b;
    fscanf (fin, "%d %d", &a, &b);

    int count = 0, current = b + 1, bases, base;

    while(count != a) {
        bases = 0;
        for(base = 2; base <= 10; base++) {
            char* changed = to_base(current, base);
            if(palindromic(changed))
                bases++;
            if(bases == 2)
                break;
        }
        if(bases == 2) {
            count++;
            fprintf (fout, "%d\n", current);
        }
        current++;
    }

    return 0;
}