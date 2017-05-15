#include <stdio.h>

int reverse(int number) {
	int ans =  0;
	int multiplictive = 100;

	while(number != 0) {
		ans += multiplictive * (number % 10);
		number /= 10;
		multiplictive /= 10;
	}

	return ans;
}

int main(int argc, char const *argv[]) {
	int a, b;
	scanf("%d %d", &a, &b);
	int ra = reverse(a), rb = reverse(b);

	printf("%d\n", (ra < rb) ? rb : ra);
}