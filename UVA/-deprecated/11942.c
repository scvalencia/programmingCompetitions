#include <stdio.h>
#include <stdbool.h>

bool isAscending(int n, int array[n]) {
	bool ans = true;
	int i = 0;
	for(; i < n - 1; i++)
		if(array[i] >= array[i + 1]) {
			ans = false;
			break;
	}
	return ans;
}

bool isDescending(int n, int array[n]) {
	bool ans = true;
	int i = 0;
	for(; i < n - 1; i++)
		if(array[i] <= array[i + 1]) {
			ans = false;
			break;
	}
	return ans;	
}

bool isSorted(int n, int array[n]) {
	return (isAscending(n, array) || isDescending(n, array));
}

int main(int argc, char **argv) {
	int TC;
	scanf("%d", &TC);
	printf("Lumberjacks:\n");
	while(TC--) {
		int array[10], i = 0;
		for(; i < 10; i++)
			scanf("%d", &array[i]);
		if(isSorted(10, array))
			printf("Ordered\n");
		else
			printf("Unordered\n");
	}
	return 0;
}