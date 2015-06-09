#include <stdio.h>
#include <math.h>
#define BOUND 10000000

int array[BOUND + 1] = {0};

void populateArray() {
	int i = 1, j;
	for(; i <= BOUND; i++)
		for(j = 1; i * j <= BOUND; j++)
			array[i * j]++;
}

int main(int argc, char const *argv[]) {
	populateArray();
	int ans = 0, i = 2;
	for(; i < BOUND; i++)
		if(array[i] == array[i + 1])
			ans++;
	printf("%d\n", ans);
	return 0;
}