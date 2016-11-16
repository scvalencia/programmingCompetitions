/*
 * REFERENCE: http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000000

int main(int argc, char const *argv[]) {
	int n, i, j, *array, max = 0, init, end;
	scanf("%d", &n);

	array = (int*) malloc(sizeof(int) * n);

	for(i = 0; i < n; i++)
		scanf("%d", &array[i]);

	int max_ending_here = 0;
 
    for(i = 0; i < n; i++) {
        max_ending_here = max_ending_here + array[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max < max_ending_here)
            max = max_ending_here;
    }

	/*
	for(i = 0; i < n; i++) {
		int sum = 0;
		for(j = i; j < n; j++) {
			
			sum += array[j];
			
			if(sum > max) {
				init = i;
				end = j;
				max = sum;
			}

		}
	}
	*/

	printf("%d\n", max);
	return 0;
}