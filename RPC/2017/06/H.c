#include <stdio.h>  

#define sz 10000010
#define inf 1000000090

long a[sz + 2], L[sz + 2], R[sz + 2];
long long cnt;

void merge(long p, long q, long r) {
    long i, j, k, ind1, ind2;

    for (i = p, ind1 = 1; i <= q; i++)
        L[ind1++] = a[i];

    L[ind1] = inf;

    for (i = q + 1, ind2 = 1; i <= r; i++)
        R[ind2++] = a[i];

    R[ind2] = inf;

    i = j = 1;

    for (k = p; k <= r; k++) {
        if (L[i] > R[j]) {
            cnt += ind1 - i;
            a[k] = R[j];
            j++;
        } else {
            a[k] = L[i];
            i++;
        }
    }
}

void mergeSort(long p, long r) {
    if (p < r) {
        long q = (p + r) / 2;
        mergeSort(p, q);
        mergeSort(q + 1, r);
        merge(p, q, r);
    }
}

int main(int argc, char
    const * argv[]) {

    int length;

    while (scanf("%d", & length) && length != 0) {
        int n = length, i = 0;

        for (i = 1; i <= length; i++)
            scanf("%ld", &a[i]);

        cnt = 0;
        mergeSort(1, n);
        printf("%lld\n", cnt);
    }

    return 0;
}