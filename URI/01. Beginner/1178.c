#include <stdio.h>

#define SIZE 100

int main(int argc, char const *argv[]) {

    int i = 0;
    float number;

    scanf("%f", &number);

    for(i = 0; i < SIZE; i++, number /= 2.0)
        printf("N[%d] = %.4f\n", i, number);

    return 0;

}