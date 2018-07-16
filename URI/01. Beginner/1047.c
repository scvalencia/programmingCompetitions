#include <stdio.h>


int main(int argc, char const *argv[]) {
    
    int st, sm, et, em, rm, rt;
    scanf("%d %d %d %d", &st, &sm, &et, &em);

    rt = et - st;

    if (rt < 0)
        rt = 24 + (et - st);

    rm = em - sm;

    if (rm < 0) {
        rm = 60 + (em - sm);
        rt--;
    }

    if (et == st && em == sm)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    else 
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rt, rm);

    return 0;

}