#include <stdio.h>

void processJumps(int array[], int size, int* lowJump, int* highJump) {
	int i = 0;
	for(; i < size - 1; i++) {
		int item = array[i];
		int postItem = array[i + 1];
		if(postItem < item)
			(*lowJump)++;
		else if(item < postItem)
			(*highJump)++;
	}
}

int main(int argc, char **argv) {
	int TC, cases = 1;
	scanf("%d", &TC);
	while(TC--) {
		int N, i = 0;
		scanf("%d", &N);
		int array[N];
		for(; i < N; i++)
			scanf("%d", &array[i]);
		int low = 0, high = 0;
		int *lowAlias = &low, *highAlias = &high;
		processJumps(array, N, lowAlias, highAlias);
		printf("Case %d: %d %d\n", cases, high, low);
		cases++;
	}
	return 0;
}