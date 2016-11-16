#include <stdio.h>

int main(int argc, char const *argv[]) {
    int maxLenght, TC;
    scanf("%d %d", &maxLenght, &TC);

    while(TC--) {
        int w, h;
        scanf("%d %d", &w, &h);

        if (w < maxLenght || h < maxLenght)
            printf("UPLOAD ANOTHER");
        else if (w == h)
            printf("ACCEPTED");
        else
            printf("CROP IT");

        printf("\n");
    }
    
    return 0;
}