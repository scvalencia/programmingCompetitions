#include <stdio.h>

int main(int argc, char const *argv[]) {
	int size, number, idx = 0, min_idx = 0, min = 2000;

	scanf("%d", &size);

	while(size--) {
		scanf("%d", &number);
		
		if(number < min) {
			min = number;
			min_idx = idx;
		}

		idx++;
	}

	printf("Menor valor: %d\nPosicao: %d\n", min, min_idx);

	return 0;
}