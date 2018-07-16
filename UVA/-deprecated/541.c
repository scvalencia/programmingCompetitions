#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i, j, n = -1;
	while(1) {
		scanf("%d", &n);
		if(n == 0)
			break;
		int matrix[n][n], row = 0, col = 0, prevRow = -1, prevCol = -1;
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &matrix[i][j]);

		for(i = 0; i < n; i++) {
			row = 0;
			for(j = 0; j < n; j++) {
				int value = matrix[i][j];
				if(value)
					row += 1;
			}
			
			if(row % 2 != 0) {
				if(prevRow == -1)
					prevRow = i + 1;
				else
					goto EXIT_LABEL;
			}
		}

		for(i = 0; i < n; i++) {
			col = 0;
			for(j = 0; j < n; j++) {
				int value = matrix[j][i];
				if(value)
					col += 1;
			}
			
			if(col % 2 != 0) {
				if(prevCol == -1)
					prevCol = i + 1;
				else
					goto EXIT_LABEL;
			}
		}

		if(prevCol == -1 && prevRow == -1)
			printf("OK\n");

		else {
			printf("Change bit (%d,%d)\n", prevRow, prevCol);
		}

		continue;

		EXIT_LABEL:
			printf("Corrupt\n");


	}

	return 0;
}