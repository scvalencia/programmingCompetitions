/*
ID: sc.vale2
LANG: C
TASK: transform
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

bool case1(int n, char matrix[n][n], char base[n][n]) {
	int i = 0, j;
	for(; i < n; i++)
		for(j = 0; j < n; j++)
			if(matrix[i][j] != base[n - j - 1][i])
				return false;
	return true;
}

bool case2(int n, char matrix[n][n], char base[n][n]) {
	int i = 0, j;
	for(; i < n; i++)
		for(j = 0; j < n; j++)
			if(matrix[i][j] != base[n - i - 1][n - j - 1])
				return false;
	return true;
}

bool case3(int n, char matrix[n][n], char base[n][n]) {
	int i = 0, j;
	for(; i < n; i++)
		for(j = 0; j < n; j++)
			if(matrix[i][j] != base[j][n - i - 1])
				return false;
	return true;
}

bool case4(int n, char matrix[n][n], char base[n][n]) {
	int i = 0, j;
	for(; i < n; i++)
		for(j = 0; j < n; j++)
			if(matrix[i][j] != base[i][n - j - 1])
				return false;
	return true;
}

bool case5(int n, char matrix[n][n], char base[n][n]) {
	char aux[n][n];
	int i = 0, j;

	for(; i < n; i++)
		for(j = 0; j < n; j++)
			aux[i][j] = base[i][n - j - 1];

	if(case4(n, aux, base) && (case1(n, matrix, aux) || case2(n, matrix, aux) || case3(n, matrix, aux)))
		return true;

	return false;
}

bool case6(int n, char matrix[n][n], char base[n][n]) {
	int i = 0, j;
	for(; i < n; i++)
		for(j = 0; j < n; j++)
			if(matrix[i][j] != base[i][j])
				return false;
			
	return true;
}

void read(FILE *fin, int size, char matrix[size][size]) {
	char c;
	int i, j;

	i = 0;
	while(i < size) {
		j = 0;
		while(j < size) {
			c = getc(fin);
			if(c != '\n') {
				matrix[i][j] = c;
				j++;
			}
		}
		i++;
	}
}

void print(int size, char matrix[size][size]) {
	int i, j;
	for(i = 0; i < size; i++) {
    	for(j = 0; j < size; j++)
    		printf("%c", matrix[i][j]);
    	printf("\n");
    }
}

int main(int argc, char const *argv[]) {
	FILE *fin  = fopen("transform.in", "r");
    FILE *fout = fopen("transform.out", "w");

    char c;
    int size, i, j, sel;
    fscanf(fin, "%d\n", &size);

    char base[size][size], alter[size][size];

    read(fin, size, base);
    read(fin, size, alter);

    if(case1(size, alter, base))
    	sel = 1;
    else if(case2(size, alter, base))
    	sel = 2;
    else if(case3(size, alter, base))
    	sel = 3;
    else if(case4(size, alter, base))
    	sel = 4;
    else if(case5(size, alter, base))
    	sel = 5;
    else if(case6(size, alter, base))
    	sel = 6;
    else
    	sel = 7;

    fprintf (fout, "%d\n", sel);
    return 0;
}