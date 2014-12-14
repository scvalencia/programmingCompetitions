#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

void scan_int_matrix(int n, int mat[n][n]) {
	for(int i = 0; i < n; i++) 
		for(int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
}

void print_int_matrix(int n, int mat[n][n]) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}

}

void getRow(int n, int row[n], int matrix[n][n], int ans) {
	int counter = 0;
	for(int i = 0; i < n; i++, counter++)
		row[counter] = matrix[ans][i];
}

void print_vector(int size, int vector[size]) {
	for(int i = 0; i < size; i++)
		printf("%d ", vector[i]);
	printf("\n");
}

int main(int argc, char **argv) {
	int TC; // Test cases number
	int caseNumber = 1; // For outpur purposes
	int i = 0, j = 0; // Looping variables
	int grid[4][4];
	scanf("%d", &TC);
	while(TC--) {
		int ans;
		scanf("%d", &ans);
		scan_int_matrix(4, grid);
		int row1[4];
		getRow(4, row1, grid, ans - 1);
		//print_vector(4, row1);
		scanf("%d", &ans);
		scan_int_matrix(4, grid);
		int row2[4];
		getRow(4, row2, grid, ans - 1);
		//print_vector(4, row2);
		int definitiveAns = -1;
		int times = 0;
		for(int i = 0; i < 4; i++)
			for(int j = 0; j < 4; j++)
				if(row1[i] == row2[j]) {
					definitiveAns = row1[i];
					times++;
				}

		printf("Case #%d: ", caseNumber);

		if(definitiveAns == -1)
			printf("Volunteer cheated!");
		else if(definitiveAns != -1 && times == 1)
			printf("%d", definitiveAns);
		else
			printf("Bad magician!");
		printf("\n");
		caseNumber++;
	}
	return 0;
}