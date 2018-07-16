#include <stdio.h>

#define SIZE 1000

int main(int argc, char const *argv[]) {

    int i = 0, n;
    int a[SIZE] = {0};

    scanf("%d", &n);

    for(i = 0; i < SIZE; i++)
        printf("N[%d] = %d\n", i, i % n);

    return 0;

}