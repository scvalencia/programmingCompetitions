#include <stdio.h>


int main(int argc, char const *argv[]) {

    const int DIMENSION = 12;

    int i, j, count = 0;
    char operation;

    float matrix[DIMENSION][DIMENSION];
    float summation = 0.0;

    scanf("%c", &operation);

    for(i = 0; i < DIMENSION; i++)
        for(j = 0; j < DIMENSION; j++)
            scanf("%f", &matrix[i][j]);

    for(i = 1; i < DIMENSION; i++)
        for(j = 0; j < i; j++, count++)
            summation += matrix[i][j];

    printf("%.1f\n", (operation == 'S') ? summation : summation / count);

    return 0;
}