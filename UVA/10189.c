#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countAsterisks(int n, char array[n]);

int main(int argc, char const *argv[]) {
	int n, m;
	int cases = 1;
	while((scanf("%d %d", &n, &m) != EOF) && (n != 0 && m != 0)) {
		char matrix[n][m];
		int i = 0, j = 0;
		for(; i < n; i++) {
			char string[200];
			scanf("%s", string);
			j = 0;
			for(; j < m; j++)
				matrix[i][j] = string[j];
		}
		char up, down, left, right, downLeft, downRigth, upLeft, upRight;
		char array[8];
		int newVal = 0;
		if(m == 1) {
			for(i = 0; i < n; i++) {
				if(matrix[i][0] == '*')
					continue;
				if(i == 0) {
					array[0] = matrix[i + 1][0];
					newVal = countAsterisks(1, array);
					matrix[i][0] = (char)(((int) '0') + newVal);
				}
				else if(i == (n - 1)) {
					array[0] = matrix[i - 1][0];
					newVal = countAsterisks(1, array);
					matrix[i][0] = (char)(((int) '0') + newVal);
				}
				else {
					array[0] = matrix[i - 1][0];
					array[1] = matrix[i + 1][0];
					newVal = countAsterisks(2, array);
					matrix[i][0] = (char)(((int) '0') + newVal);
				}
			}
		}
		else {				
			for(i = 0; i < n; i++) {
				for(j = 0; j < m; j++) {
					newVal = 0;
					if(matrix[i][j] == '*')
						continue;
					if(i == 0 && j == 0) {
						down = matrix[i + 1][j];
						right = matrix[i][j + 1];
						downRigth = matrix[i + 1][j + 1];
						array[0] = down; array[1] = right; array[2] = downRigth;
						newVal = countAsterisks(3, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					else if(i == 0 && j == (m - 1)) {
						down = matrix[i + 1][j];
						left = matrix[i][j - 1];
						downLeft = matrix[i + 1][j - 1];
						array[0] = down; array[1] = left; array[2] = downLeft;
						newVal = countAsterisks(3, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					else if(i == (n - 1) && j == 0) {
						up = matrix[i - 1][j];
						right = matrix[i][j + 1];
						upRight = matrix[i - 1][j + 1];
						array[0] = up; array[1] = right; array[2] = upRight;
						newVal = countAsterisks(3, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					else if(i == (n - 1) && j == (m - 1)) {
						up = matrix[i - 1][j];
						left = matrix[i][j - 1];
						upLeft = matrix[i - 1][j - 1];
						array[0] = up; array[1] = left; array[2] = upLeft;
						newVal = countAsterisks(3, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					if(j == 0) {
						up = matrix[i - 1][j];
						right = matrix[i][j + 1];
						upRight = matrix[i - 1][j + 1];
						downRigth = matrix[i + 1][j + 1];
						down = matrix[i + 1][j];
						array[0] = up; array[1] = right; array[2] = upRight;
						array[3] = downRigth; array[4] = down;
						newVal = countAsterisks(5, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					if(j == (m - 1)) {
						up = matrix[i - 1][j];
						left = matrix[i][j - 1];
						upLeft = matrix[i - 1][j - 1];
						down = matrix[i + 1][j];
						downLeft = matrix[i + 1][j - 1];
						array[0] = up; array[1] = left; array[2] = upLeft; array[3] = down;
						array[4] = downLeft;
						newVal = countAsterisks(5, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					if(i == 0) {
						left = matrix[i][j - 1];
						right = matrix[i][j + 1];
						down = matrix[i + 1][j];
						downRigth = matrix[i + 1][j + 1];
						downLeft = matrix[i + 1][j - 1];
						array[0] = left; array[1] = right; array[2] = down; array[3] = downRigth;
						array[4] = downLeft;
						newVal = countAsterisks(5, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					if(i == (n - 1)) {
						up = matrix[i - 1][j];
						left = matrix[i][j - 1];
						right = matrix[i][j + 1];
						upLeft = matrix[i - 1][j - 1];
						upRight = matrix[i - 1][j + 1];
						array[0] = up; array[1] = left; array[2] = right; array[3] = upLeft;
						array[4] = upRight;
						newVal = countAsterisks(5, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
					else {
						up = matrix[i - 1][j];					
						down = matrix[i + 1][j];
						left = matrix[i][j - 1];
						right = matrix[i][j + 1];
						upLeft = matrix[i - 1][j - 1];
						upRight = matrix[i - 1][j + 1];
						downRigth = matrix[i + 1][j + 1];
						downLeft = matrix[i + 1][j - 1];
						array[0] = up; array[1] = left; array[2] = right; array[3] = down;
						array[4] = downLeft; array[5] = upLeft; array[6] = downRigth; array[7] = upRight;
						newVal = countAsterisks(8, array);
						matrix[i][j] = (char)(((int) '0') + newVal);
						continue;
					}
				}
			}
		}
		if(cases > 1)
			printf("\n");
		printf("Field #%d:\n", cases);
		for(i = 0; i < n; i++) {
			for(j = 0; j < m; j++) {
				printf("%c", matrix[i][j]);
			}
			printf("\n");
		}
		cases++;		
	}
	return 0;
}

int countAsterisks(int n, char array[n]) {
	int i = 0, ans = 0;
	for(; i < n; i++)
		if(array[i] == '*')
			ans++;
	return ans;
}

/*
#include <stdio.h>
#include <iostream>
 
int main ()
{
    char A[150][150], Input [150];
    long M, N, I, J, Case=0, Flag = 0;
    //freopen ("10189in", "r", stdin);
    //freopen ("10189out", "w", stdout);
 
    while (1){
 
        gets(Input);
        sscanf(Input,"%ld%ld",&M,&N);
 
        if (M==0 && N==0)
            break;
 
        long B[150][150] = {0};
 
        for (I=0; I<M; I++)
            gets (A[I]);
 
        for (I=0; I<M; I++ ) {
 
            for (J=0; J<N; J++){
 
                if (A[I][J]=='*'){
                    B[I][J+1]++;
                    B[I+1][J+1]++;
                    B[I+1][J]++;
                    B[I+1][J-1]++;
                    B[I][J-1]++;
                    B[I-1][J-1]++;
                    B[I-1][J]++;
                    B[I-1][J+1]++;
                }
            }
 
        }
 
        // output
        if (Flag==1)
            printf("\n");
        Flag = 1;
        printf("Field #%ld:\n", ++Case);
        for (I=0; I<M; I++){
            for (J=0; J<N; J++){
                if (A[I][J]=='*')
                    printf("%c", A[I][J]);
                else
                    printf("%ld", B[I][J]);
 
            }
            printf("\n");
        }
 
        //printf("\n");
    }
    return 0;
}
*/