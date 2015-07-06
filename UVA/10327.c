#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int bubbleSort(int* b, int n) {
	int i, j, temp, ans = 0;
	for (i = (n - 1); i > 0; i--)
    	for (j = 1; j <= i; j++)
      		if (*(b + j - 1) > *(b + j) && ++ans)
        		swap(&b[j-1], &b[j]);
    return ans;
}

int main(int argc, char const *argv[]) {
	int TC, i;
	while(scanf("%d", &TC) != EOF) {
		int* array = malloc(TC * sizeof (int));
		for(i = 0; i < TC; i++)
			scanf("%d", (array + i));
		printf("Minimum exchange operations : %d\n", bubbleSort(array, TC));
	}
	return 0;
}