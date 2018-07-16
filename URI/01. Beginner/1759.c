#include <stdio.h>


int main(int argc, char const *argv[]) {

    int n;
    scanf("%d", &n);

    while(n--)
        printf("%s%c", "Ho", n ? ' ' : '!');

    printf("\n");

    return 0;
}