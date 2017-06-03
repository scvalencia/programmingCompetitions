#include <stdio.h>

#define BOUND 1000000

void solve(int number) {
    int n = 1, m = number;
    int len, ans[BOUND] = {}, rec[BOUND] = {};

    printf("0.");

    for (len = 1; ; len++) {
        ans[len - 1] = n / m;
        n = n % m;
        if (rec[n]) {
            int i;
            for (i = 1; i < rec[n]; i++)
                printf("%d", ans[i]);

            for (i = 0; i < len - rec[n]; i++)
                printf("%d", ans[rec[n] + i]);

            break;
        }

        rec[n] = len;
        n = n * 10;
    }

    printf("\n");
}

int main(int argc, char const *argv[]) {
    int testcases;
    scanf("%d", &testcases);

    while(testcases--) {
        int number;
        scanf("%d", &number);
        solve(number);
    }

    return 0;
}