#include <stdio.h>


int main(int argc, char const *argv[]) {

    int x, z, i = 1, sum = 0;

    scanf("%d", &x);

    while(scanf("%d", &z) && z <= x);

    for(sum = x; sum < z; sum += ++x, i++);

    printf("%d\n", i);
    
    return 0;
}