#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b){
   return (*(int*)a - *(int*)b);
}

int main(int argc, char const *argv[]) {
	int count, size, i = 0;
	scanf("%d", &count);
	size = count;

	int* buses = (int*) malloc(sizeof(int) * count + 1);

	while(count--) 
		scanf("%d", &buses[i++]);

	*(buses + i) = 2000;
	
	qsort(buses, size, sizeof(int), cmpfunc);

	for(i = 0; i < size; i++) {
		int j = i;

		while(buses[i] == (buses[i + 1] - 1))
			i++;

		if(i == j)
			printf("%d ", buses[j]);
		else if(i == j + 1)
			printf("%d %d ", buses[j], buses[i]);
		else if(i != j)
			printf("%d-%d ", buses[j], buses[i]);
		
	}

	printf("\n");
	return 0;
}