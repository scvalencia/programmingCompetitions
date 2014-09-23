#include <stdio.h>
int max(int array[], int size);
int min(int array[], int size);

int main(int argc, char **argv) {
	int tc;
	scanf("%d", &tc);
	while(tc--) {
		int stores;
		scanf("%d", &stores);		
		int size = stores;
		int i = 0;
		int array[stores];
		while(stores--) {
			scanf("%d", &array[i]);
			i++;
		}
		
		int ans = 2 * (max(array, size) - min(array, size));
		printf("%d\n", ans);
	}
	return 0;
}

int max(int array[], int size) {
	int i = 0;
	int max = array[0];
	for(i = 1; i < size; i++)
		if(max < array[i])
			max = array[i];
	return max;
}

int min(int array[], int size) {
	int i = 0;
	int min = array[0];
	for(i = 1; i < size; i++)
		if(array[i] < min)
			min = array[i];
	return min;
}