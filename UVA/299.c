#include <stdio.h>

int countSwaps(int[], int);
void swap(int*, int*);

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int size, i = 0;
		scanf("%d", &size);
		int array[size];
		for(; i < size; i++)
			scanf("%d", &array[i]);
		printf("Optimal train swapping takes %d swaps.\n", countSwaps(array, size));
	}
	return 0;
}

int countSwaps(int b[], int n) {
	int i, j, temp, ans = 0;
	for (i = (n - 1); i > 0; i--)
    	for (j = 1; j <= i; j++)
      		if (b[j-1] > b[j]) {
      			ans++;
        		swap(&b[j-1], &b[j]);
      		}
	return ans;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}