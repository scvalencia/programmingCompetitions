#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n;
	scanf("%d", &n);

	while(n--) {
		int a, b;
		scanf("%d%d", &a, &b);

		if(b == 0)
			printf("divisao impossivel\n");
		else 
			printf("%.1lf\n", (double) a / (double) b);
	}

	return 0;
}