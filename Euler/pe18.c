#include <stdio.h>
#define COL 15
#define ROW 15
#define MAX(A, B) (A > B)? A : B

int numbers[COL][ROW] = {
	{ 75 },
	{ 95, 64 },
	{ 17, 47, 82 },
	{ 18, 35, 87, 10 },
	{ 20, 4, 82, 47, 65 },
	{ 19, 1, 23, 75, 3, 34 },
	{ 88, 2, 77, 73, 7, 63, 67 },
	{ 99, 65, 4, 28, 6, 16, 70, 92 },
	{ 41, 41, 26, 56, 83, 40, 80, 70, 33 },
	{ 41, 48, 72, 33, 47, 32, 37, 16, 94, 29 },
	{ 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14 },
	{ 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57 },
	{ 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48 },
	{ 63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31 },
	{ 4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23 }
};


/*
int numbers[4][4] = {
	{3},
	{7, 4},
	{2, 4, 6},
	{8, 5, 9, 3}
};
*/

int main(int argc, char const *argv[]) {

	/* Greedy do not works
	int currentRow = 0, currentCol = 0, i, j, sum = 0;
	while(numbers[currentRow][currentCol] != 0) {
		printf("%d ", numbers[currentRow][currentCol]);
		sum += numbers[currentRow][currentCol];
		if(numbers[currentRow + 1][currentCol] > numbers[currentRow + 1][currentCol + 1]) {
			currentRow++;
		} else {			
			currentRow++;
			currentCol++;
		}
	}
	printf("%d\n", sum);
	*/

	int i = COL - 1, j = 0, max = 0;
	for(; i > 0; i--)
		for(j = 0; j < ROW - 1; j++) {
			numbers[i -1][j] += MAX(numbers[i][j], numbers[i][j+1]);
			max = MAX(max, numbers[i -1][j]);
		}
	printf("%d\n", max);
	return 0;
}