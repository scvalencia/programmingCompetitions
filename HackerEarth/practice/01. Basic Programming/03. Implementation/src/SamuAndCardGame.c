#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	int TC;
	scanf("%d", &TC);

	while(TC--) {
		int rows, cols, cards, count = 0;
		int currentRow = 1, currentCol = 1;
		scanf("%d %d", &rows, &cols);
		scanf("%d", &cards);

		while(cards--) {
			int r, c;
			scanf("%d %d", &r, &c);

			//printf("CARD: %d %d %d %d\n", r, c, currentRow, currentCol);

			while(true) {
				
				if(currentRow + r > rows || currentCol + c > cols)
					break;
				if(currentRow + r < 1 || currentCol + c < 1)
					break;

				currentRow += r;
				currentCol += c;
				count++;
				//printf("%d %d\n", currentRow, currentCol);
			}	
		}

		printf("%d\n", count);

	}

	return 0;
} 