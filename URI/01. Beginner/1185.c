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

    for(i = 0; i < DIMENSION - 1; i++)
        for(j = 0; j < DIMENSION - i - 1; j++, count++)
            summation += matrix[i][j];

    printf("%.1f\n", (operation == 'S') ? summation : summation / count);

    return 0;
}