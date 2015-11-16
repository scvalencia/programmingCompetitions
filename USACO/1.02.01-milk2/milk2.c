/*
ID: sc.vale2
LANG: C
TASK: milk2
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 1000000 + 1
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

void fill(bool* array, int init, int end, bool value) {
    int i = init;
    for(; i <= end; i++)
        *(array + i) = value;
}

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen("milk2.in", "r");
    FILE *fout = fopen("milk2.out", "w");

    bool *array = malloc(SIZE * sizeof(bool));
    fill(array, 0, SIZE - 1, false);
    int N, a, b, i = 1, max_true = 0, max_false = 0, j = 0;
    int init = 50000 * 2, end = -1, count = 0;
    bool current, value; 

    fscanf(fin, "%d", &N);

    while(N--) {
        fscanf(fin, "%d %d", &a, &b);
        fill(array, a, b, true);
        init = MIN(init, a);
        end = MAX(end, b);
    }

    j = 0;
    a = init;

    current = true;

    for (i = init + 1; i <= end; i++) {
        value = *(array + i);
        if (current != value) {
            ++j;
            if(count % 2 == 0)
                max_true = MAX(max_true, ((j % 2 == 0) ? i : i - 1) - a);
            else
                max_false = MAX(max_false, ((j % 2 == 0) ? i : i - 1) - a);
            a = ((j % 2 == 0) ? i : i - 1);
            printf("%d ", i);
            count++;
            current = value;
        }
    }

    max_true = MAX(max_true, end - a); 

    fprintf(fout, "%d %d\n", max_true, max_false);

    free(array);
    return 0;
}