#include <stdio.h>

int main() {

    int TC, a, b;
    scanf("%d", &TC);

    while(TC--) {
        scanf("%d %d", &a, &b);
        printf("%c\n", (a == b) ? '=' : ((a < b) ? '<' : '>'));
    }

}