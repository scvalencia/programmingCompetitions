#include <stdio.h>


int main(int argc, char const *argv[]) {

    float income;
    scanf("%f", &income);

    if(income >= 0.0 && income <= 2000.00)
        printf("Isento\n");

    else if(income >= 2000.01 && income <= 3000.00)
        printf("%.2f\n", income * 0.08);

    else if(income >= 3000.01 && income <= 4500.00)
        printf("%.2f\n", income * 0.18);

    else
        printf("%.2f\n", income * 0.28);
        
    return 0;
}
