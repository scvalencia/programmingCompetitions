#include <stdio.h>


int main(int argc, char const *argv[]) {

    int TC;
    scanf("%d", &TC);

    float a, b, c;

    while(TC--) {

        scanf("%f %f %f", &a, &b, &c);

        float result = a * 2 + b * 3 + c * 5;
        result /= 10;

        printf("%.1f\n", result);

    }
    
    return 0;
}
