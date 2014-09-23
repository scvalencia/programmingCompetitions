#include <stdio.h>

int main(int argc, char **argv) {
	int TC, cases = 1;
	scanf("%d", &TC);
	while(TC--) {
		int size = 10, i = 0, max = 0;
		int array[size];
		char sites[size][101];
		for(; i < size; i++) {
			scanf("%s %d", sites[i], &array[i]);
			if(array[i] > max)
				max = array[i];
		}
		printf("Case #%d:\n", cases);
		for(i = 0; i < size; i++) 
			if(array[i] == max) 
				printf("%s\n", sites[i]);
		cases++;
	}
	return 0;
}