#include <stdio.h>
#include <stdlib.h>

int merge(int array[], int first, int last) {

    int mid = (first + last) / 2;
    int ainit = first;
    int binit = mid + 1;

    int final[last - first + 1], finali = 0;
    int inversion = 0, i;

    while (ainit <= mid && binit <= last) {
        if (array[ainit] <= array[binit]) {
            final[finali++] = array[ainit++];
        } else {
            final[finali++] = array[binit++];
            inversion += mid - ainit + 1;
        }
    }

    while (ainit <= mid)
        final[finali++] = array[ainit++];

    while (binit <= last)
        final[finali++] = array[binit++];

    for (i = 0; i < last - first + 1; i++)
        array[i + first] = final[i];

    return inversion;
}

int mergeSort(int array[], int a, int b) {
    int x, y, z, mid;
    if (a >= b) return 0;

    mid = (a + b) / 2;

    x = mergeSort(array, a, mid);
    y = mergeSort(array, mid + 1, b);
    z = merge(array, a, b);

    return x + y + z;
}

int main(int argc, char const *argv[]) {
    int length;
    
    while(scanf("%d", &length) && length != 0) {
        int n = length, i = 0;
        int* array = malloc(sizeof(int) * n);

        while(n--) {
            int number;
            scanf("%d", &number);
            array[i++] = number;
        }

        int inversions = mergeSort(array, 0, length - 1);

        printf("%d\n", inversions);
    }

    return 0;
}