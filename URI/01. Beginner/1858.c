#include <stdio.h>


int main(int argc, char const *argv[]) {

    int peopleCount, i = 1, min = 1000, minIndex = 0;
    scanf("%d", &peopleCount);

    while(peopleCount--) {
        int current;
        scanf("%d", &current);

        if(current < min) {
            min = current;
            minIndex = i;
        }

        i++;

    }

    printf("%d\n", minIndex);

    return 0;
}
