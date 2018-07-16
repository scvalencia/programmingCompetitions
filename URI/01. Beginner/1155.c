#include <stdio.h>


int main(int argc, char const *argv[]) {

    float sum = 0.0;
    int i = 1;

    for(; i <= 100; i++)
        sum += 1 / (float) i;
    
    printf("%.2f\n", sum);

    return 0;
}
