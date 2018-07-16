#include <stdio.h>

#define SIZE 20

int main(int argc, char const *argv[]) {

    int i = 0, l = 0, u = SIZE - 1;
    int a[SIZE] = {0};

    for(; i < SIZE; i++)
        scanf("%d", (a + i));

    while(l < u) {
        
        int temp = a[l];
        a[l] = a[u];
        a[u] = temp;

        l++; u--;
    }


    for(i = 0; i < SIZE; i++)
        printf("N[%d] = %d\n", i, a[i]);

    return 0;
}