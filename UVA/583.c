#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

void primeFactors(long n) {

    long ans = 0, k = n, t = 2;

    if(k == 1)
        printf("%d", 1);

    while(k != 1) {
        if(k % t == 0) {
            k = k / t;
            if(k == 1)
                printf(" %ld", t);
            else
                printf(" %ld x", t);
        } else
            t = (t * t > k) ? k : t + 1;
    }
    printf("\n");
}

int main(int argc, char const *argv[]) {
    long number;
    while(scanf("%ld", &number), number != 0) {
        printf("%ld =", number);
        if(number < 0) {
            number = -1 * number;
            printf(" -1 x");
        }
        primeFactors(number);
    }
    return 0;
}