#include <stdio.h>


int main(int argc, char const *argv[]) {

    int n, sum = 0, count = 0;
    float average = 0.0;

    while(scanf("%d", &n) && n > 0) {
        sum += n;
        count += 1;
    }

    average = sum / (float) count;
    printf("%.2f\n", average);
    
    return 0;
}
