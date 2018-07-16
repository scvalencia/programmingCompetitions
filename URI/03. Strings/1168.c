#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ledCount(int n) {

    int count;
    
    switch (n) {
        case 1:
            count = 2;
            break;
        case 2:
        case 3:
        case 5:
            count = 5;
            break;
        case 4:
            count = 4;
            break;
        case 0:
        case 6:
        case 9:
            count = 6;
            break;
        case 7:
            count = 3;
            break;
        case 8:
            count = 7;
            break;
    }

    return count;
}

int main(int argc, char const *argv[]) {

    int TC, i;
    scanf("%d", &TC);

    while(TC--) {
        
        char* digits = malloc(200 * sizeof(char));
        scanf("%s\n", digits);

        int ans = 0;

        for(i = 0; i < strlen(digits); i++) {
            int digit = *(digits + i) - '0';
            ans += ledCount(digit);
        }
        
        printf("%d leds\n", ans);

        free(digits);

    }

    return 0;

}