#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n) {
	int ans = 0;

	while(n != 0) {
		ans += n % 10;
		n /= 10;
	}

	return ans;
}

int main(int argc, char const *argv[]) {

	int l, d, x;
	scanf("%d %d %d", &l, &d, &x);

	int n, m, i;

	for(i = l; i <= d; i++)
		if(sumOfDigits(i) == x){
			printf("%d\n", i);
			break;
		}

	for(i = d; i >= l; i--)
		if(sumOfDigits(i) == x){
			printf("%d\n", i);
			break;
		}



	return 0;
}