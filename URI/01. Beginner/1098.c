#include <stdio.h>


int main(int argc, char const *argv[]) {

    int count;
    double i, j;

    for(i = 0; i <= 2.01; i += 0.2)
        for(j = 1; j <= 3; j++)
            printf("I=%f J=%f\n", i, j + i);
    

    return 0;
}