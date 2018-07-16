#include <stdio.h>


int main(int argc, char const *argv[]) {

    int n, i;
    scanf("%d", &n);

    for(i = 0; i < 10; i++, n *= 2)
        printf("N[%d] = %d\n", i, n);
    
    return 0;
}