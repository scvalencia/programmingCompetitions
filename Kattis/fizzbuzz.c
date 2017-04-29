#include <stdio.h>

int main(int argc, char const *argv[]) {

	int n, x, y, i = 1;
	scanf("%d %d %d", &x, &y, &n);

	while(i <= n) {
		if((i % x) == 0 && (i % y) == 0)
			printf("FizzBuzz\n");
		else if((i % x) == 0)
			printf("Fizz\n");
		else if((i % y) == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
		i++;
	}
	
	return 0;
}