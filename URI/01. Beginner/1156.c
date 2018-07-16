#include <stdio.h>


int main(int argc, char const *argv[]) {

    float sum = 1.0;
    int num = 3, den = 2;

    for(; num != 39 + 2; num += 2, den *= 2)
        sum += (float) num / (float) den;
    
    printf("%.2f\n", sum);

    return 0;
}
