#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int n, capacity, current, summation = 0, i = 0;
	scanf("%d %d", &n, &capacity);

	while(n--) {
		scanf("%d", &current);
		summation += current;

		if(summation > capacity) 
			break;
		else
			i++;
		
	}

	printf("%d\n", i);
	return 0;
}