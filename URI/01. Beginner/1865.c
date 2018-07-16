#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    int TC;
    scanf("%d", &TC);

    while(TC--) {
        char name[100];
        int appliedForce;

        scanf("%s %d", name, &appliedForce);

        printf("%c\n", (strcmp(name, "Thor") == 0) ? 'Y' : 'N');

    }

    return 0;
}