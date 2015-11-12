/*
ID: **.****#
LANG: C
TASK: milk2
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 1000000 + 1
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

void fill(bool* array, int init, int end, bool value) {
    int i = init;
    for(; i <= end; i++)
        *(array + i) = value;
}

void bounds(bool* array, int* init, int* end) {
    int i = 0;
    for(; i <= SIZE && *init == -1; i++)
        if(*(array + i))
            *init = i;
    
    for(i = SIZE; i >= 0 && *end == -1; i--)
        if(*(array + i))
            *end = i;
}

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen("milk2.in", "r");
    FILE *fout = fopen("milk2.out", "w");

    bool *array = malloc(SIZE * sizeof(bool));
    fill(array, 0, SIZE - 1, false);
    int N, a, b, i = 1, max_true = 0, max_false = 0, count = 0, max_total = 0;
    int init = -1, end = -1, *p_init, *p_end;
    p_init = &init;
    p_end = &end;
    bool current, value;

    fscanf(fin, "%d", &N);

    while(N--) {
        fscanf(fin, "%d %d", &a, &b);
        fill(array, a, b, true);
    }

    bounds(array, p_init, p_end);

    current = true;
    for (i = init; i <= end; i++) {
        value = *(array + i);
        if (current == value)
            count++;
        else {
            if(current && count > max_true)
                max_true = count;
            if (!current && count > max_false)
                max_false = count;
            current = value;
            count = 1;
        }
    }
    /*
    current = *(array + init);

    for(i = init + 1; i <= end; i++) {
        value = *(array + i);
        count++;
        if(current == value) {
            if(current)
                max_true = (count > max_true) ? count : max_true;
            else
                max_false = (count > max_false) ? count : max_false;
        } else
            count = 0; 
        current = value;
    }
    */

    printf("%d %d\n", max_true, max_false);

    free(array);
    return 0;
}