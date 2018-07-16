#include <stdio.h>


int main(int argc, char const *argv[]) {

    int a, b;
    scanf("%d %d", &a, &b);

    int duration = (24 - a + b) % 24;
    printf("O JOGO DUROU %d HORA(S)\n", duration ? duration : 24);
    
    return 0;
}
