#include <stdio.h>

int main(int argc, char const *argv[]) {
	int N;
	scanf("%d", &N);

	int i = 1, ans = 0;
	int power = 1, dummy = N;

	while(dummy > 0) { dummy /= 2; power *= 2; }
	while((power /= 2) > 0) { ans += (N % 2) * power; N = N / 2; }

	printf("%d\n", ans);
	
	return 0;
}