#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 1000000001

int main(int argc, char const *argv[]) {
	int n, m, c, b, ans;
	int* array;
	while(scanf("%d %d", &n, &m) && (n + m != 0)) {
		array = (int*) malloc(sizeof(int) * SIZE);
		b = n + m;
		ans = 0;
		while(b--) {
			scanf("%d", &c);
			if(*(array + c))
				ans++;
			else
				*(array + c) = 1;
		}		
		printf("%d\n", ans);
	}
	
	return 0;
}