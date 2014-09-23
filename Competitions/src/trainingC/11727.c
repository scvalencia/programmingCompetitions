#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (a < b)? a : b
#define max(a, b) (a < b)? b : a

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char **argv) {
	int TC;
	scanf("%d", &TC);
	int cases = 1;
	while(TC--) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		int array[3] = {a, b, c};
		qsort(array, 3, sizeof(int), compare);
		printf("Case %d: %d\n", cases, array[1]);
		cases++;
	}
	return 0;
}