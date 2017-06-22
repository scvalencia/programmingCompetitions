#include <stdio.h>

int main(int argc, char const *argv[]) {
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    printf("MEDIA = %.1f\n", (x * 2.0 + y * 3.0 + z * 5.0) / (2.0 + 3.0 + 5.0));
    return 0;
}