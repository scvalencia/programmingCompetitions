#include <stdio.h>
#include <string.h>
#define MAXD 250
#define BOUND 110

void solve(char a[], char b[]) {
    int i, j, k, l, size_a, size_b, max;
    int fibonacci[MAXD] = {0};
    bool flag = true;

    size_a = strlen(a) - 1;
    j = 0;
    for (i = size_a; i >= 0; i--)
        *(fibonacci + j++) += *(a + i) - 48;

    size_b = strlen(b) - 1;
    j = 0;
    for (i = size_b; i >= 0; i--)
        *(fibonacci + j++) += *(b + i) - 48;

    while(1) {
        for (i = 0; i < BOUND; i ++) {
            if (*(fibonacci + i) && *(fibonacci + i + 1)) {
            	*(fibonacci + i) -= 1;
            	*(fibonacci + i + 1) -= 1;
            	*(fibonacci + i + 2) += 1;
                break;
            } else if (*(fibonacci + i) > 1 && flag) {
                *(fibonacci + i) -= 2;
                if (i == 0)
                    *(fibonacci + i + 1) += 1;
                else if (i == 1) {
                    *(fibonacci + i + 1) += 1;
                    *(fibonacci + i - 1) += 1;
                } else {
                    *(fibonacci + i + 1) += 1;
                    *(fibonacci + i - 2) += 1;
                }
                break;
            }
        }
        if (i == BOUND && flag)
            break;
    }

    flag = true;
    i = BOUND;
    while(i > 0 && flag) {
    	if(*(fibonacci + i))
    		break;
    	i--;
    }

    while(i >= 0) printf("%d", fibonacci[i--]);        

    printf("\n");
}

int main(int argc, char const *argv[]) {
    int TC = 0;
    scanf("%d", &TC);
    while(TC--) {
    	char a[MAXD], b[MAXD];
    	scanf("%s %s", a, b);
    	solve(a, b);
    }
    return 0;
}