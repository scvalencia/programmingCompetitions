#include <stdio.h>


int main(int argc, char const *argv[]) {

    int complaints;

    while(scanf("%d", &complaints) != EOF)
        printf("%s\n", complaints ? "vai ter duas!" : "vai ter copa!");

    return 0;
}