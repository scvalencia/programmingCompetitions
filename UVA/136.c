#include <stdio.h>
#include <stdlib.h>
#define N 100

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void rmdup(int *array, int length) {
    int *current , *end = array + length - 1;
    for ( current = array + 1; array < end; array++, current = array + 1 )
        while ( current <= end )
            if ( *current == *array )
            	*current = *end--;
            else
            	current++;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int generateUglyNumbers(int array[N]) {
	int current_ptr = 0, i = 1, p2 = 0, p3 = 0, p5 = 0;
	int realPointer = 1;
	array[current_ptr] = 1;
	for(; i < N - 3; i++) {
		int itm = array[current_ptr];
		p2 = itm * 2; p3 = itm * 3; p5 = itm * 5;
		array[realPointer] = p2;
		if(array[realPointer - 1] > array[realPointer])
			swap(&array[realPointer - 1], &array[realPointer]);
		realPointer++;
		array[realPointer] = p3;
		if(array[realPointer - 1] > array[realPointer])
			swap(&array[realPointer - 1], &array[realPointer]);
		realPointer++;
		array[realPointer] = p5;
		if(array[realPointer - 1] > array[realPointer])
			swap(&array[realPointer - 1], &array[realPointer]);
		realPointer++;
		current_ptr++;
	}
	qsort(array, N, sizeof(int), cmpfunc);
	printf("%d ", array[0]);
	for(i = 1; i < N; i++)
		if(array[i] != array[i - 1])
			printf("%d ", array[i]);
	printf("\n");
	return array[N - 1];
}

int main(int argc, char const *argv[]) {
	int array[N], i = 0;
	for(; i < N; i++)
		array[i] = 0;
	printf("%d\n", generateUglyNumbers(array));
	return 0;
}