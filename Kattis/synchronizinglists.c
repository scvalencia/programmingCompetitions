#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b){
   return (*(int*)a - *(int*)b);
}

int indexof(int* array, int size, int target) {
	int i = 0;

	for(; i < size; i++)
		if(*(array + i) == target)
			break;

	return i;
}

int main(int argc, char const *argv[]) {
	int n, i;

	scanf("%d", &n);
	while(n != 0) {
		int* l1 = (int*) malloc(sizeof(int) * n);
		int* l2 = (int*) malloc(sizeof(int) * n);
		int* lt = (int*) malloc(sizeof(int) * n);

		for(i = 0; i < n; i++) {
			scanf("%d", &l1[i]);
			*(lt + i) = *(l1 + i);
		}

		for(i = 0; i < n; i++)
			scanf("%d", &l2[i]);

		qsort(l1, n, sizeof(int), cmpfunc);
		qsort(l2, n, sizeof(int), cmpfunc);

		for(i = 0; i < n; i++) {
			int target = *(lt + i);
			int index = indexof(l1, n, target); // BINARY SEARCH
			printf("%d\n", *(l2 + index));
		}

		free(l1); free(l2); free(lt);

		scanf("%d", &n);
		if(n == 0)
			break;
		else
			printf("\n");
	}

	return 0;
}