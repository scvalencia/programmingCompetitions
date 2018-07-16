#include <stdio.h>


int main(int argc, char const *argv[]) {

    int TC = 10, i = 0, n;

    while(TC-- && scanf("%d", &n))
        printf("X[%d] = %d\n", i++, (n > 0) ? n : 1);
    
    return 0;
}
