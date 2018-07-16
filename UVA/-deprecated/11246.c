#include <stdio.h>
#include <stdbool.h>

int count_true(bool arg[], int n);
int main(int argc, char const *argv[]) {

    int cases, k;
    long long n;
    scanf("%d", &cases);
    while(cases > 0) {
        scanf("%llu %d", &n, &k);
        bool array[n + 1];
        int i;
        for(i = 1; i <= n; i++)
            array[i] = true;
        for(i = 1; i <= n/2; i++)
            if(array[i] && i * k <= n)
                array[i * k] = false;
        printf("%d\n", count_true(array, n));
        cases--;
    }
    
    return 0;
}

int count_true(bool arg[], int n) {
    int i;
    int sum = 0;
    for(i = 1; i <= n; i++)
        if(arg[i])
            sum++;
    return sum;
}