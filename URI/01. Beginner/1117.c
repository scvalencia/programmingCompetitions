#include <stdio.h>


int main(int argc, char const *argv[]) {

    float input, sum = 0;
    int correctCount = 0;

    while(correctCount != 2) {
        scanf("%f", &input);

        if(input < 0 || input > 10)
            printf("nota invalida\n");
        else {
            sum += input;
            correctCount += 1;
        }
    }

    printf("media = %.2f\n", sum / 2.0);

    return 0;
}
