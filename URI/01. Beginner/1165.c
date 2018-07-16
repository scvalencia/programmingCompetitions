#include <math.h>
#include <stdio.h>
#include <stdbool.h>


int main(int argc, char const *argv[]) {

    int TC, n, i;
    scanf("%d", &TC);

    while(TC--) {
        scanf("%d", &n);

        bool prime = true;

        for(i = 2; prime && i <= sqrt(n); i++)
            if(n % i == 0) 
                prime = false;

        printf("%d %s\n", n, prime ? "eh primo" : "nao eh primo");

    }
    
    return 0;
}