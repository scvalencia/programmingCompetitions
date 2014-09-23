#include <stdio.h>
#include <stdbool.h>

int mileGroup(int array[], int size) {
	int i = 0, sum = 0;
	for(; i < size; i++) {
		int item = array[i];
		int group = (item / 30) + 1;
		group *= 10;
		sum += group;
	}
	return sum;
}

int juiceGroup(int array[], int size) {
	int i = 0, sum = 0;
	for(; i < size; i++) {
		int item = array[i];
		int group = (item / 60) + 1;
		group *= 15;
		sum += group;
	}
	return sum;
}

int main(int argc, char **argv) {
	int TC, cases = 1;
	scanf("%d", &TC);
	while(TC--) {
		int N, i = 0;
		scanf("%d", &N);
		int array[N];
		while(i < N) {
			scanf("%d", &array[i]);
			i++;
		}
		int mile = mileGroup(array, N);
		int juice = juiceGroup(array, N);
		bool mileWinner = true;
		if(mile < juice)
			printf("Case %d: %s %d\n", cases, "Mile", mile);
		else if(juice < mile)
			printf("Case %d: %s %d\n", cases, "Juice", juice);
		if(mile == juice)
			printf("Case %d: %s %d\n", cases, "Mile Juice", juice);
		cases++;
	}
	return 0;
}