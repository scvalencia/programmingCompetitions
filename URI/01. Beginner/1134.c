#include <stdio.h>

#define ALCOHOL 1
#define GASOLINE 2
#define DIESEL 3


int main(int argc, char const *argv[]) {

    int n, countA = 0, countG = 0, countD = 0;

    while(scanf("%d", &n) && n != 4)
        switch(n) {
            case ALCOHOL:
                countA++;
                break;
            case GASOLINE:
                countG++;
                break;
            case DIESEL:
                countD++;
                break;
        }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", countA, countG, countD);
    
    return 0;
}
