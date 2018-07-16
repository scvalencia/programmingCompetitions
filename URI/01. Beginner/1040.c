#include <stdio.h>


int main(int argc, char const *argv[]) {
    
    float a, b, c, d, e;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    float average = (a * 2 + b * 3 + c * 4 + d * 1) / 10.0;

    printf("Media %.1f\n", average);

    if(average > 7.0)
        printf("Aluno aprovado.\n");

    else if(average < 5.0)
        printf("Aluno reprovado.\n");

    else {

        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);

        average += e;
        average /= 2;

        if(average >= 5)
            printf("Aluno aprovado.\n");
        else if(average <= 4.9)
            printf("Aluno reprovado.\n");

        printf("Media %.1f\n", average);

    }

    return 0;
}
