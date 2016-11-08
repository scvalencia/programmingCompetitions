#include <stdio.h>

void getBaseAndExponent(int n, int* base, int* exponent) {
	*base = n / 10;
	*exponent = n % 10;
}

int expo(int a, int b){
	int result = 1;

	while(b) {
		if(b & 1) result *= a;
    	b >>= 1;
    	a *= a;
  	}	

  	return result;
}

int main(int argc, char const *argv[]) {

	int TC, n, summation = 0;
	scanf("%d", &TC);

	while(TC--) {
		int base;
		int exponent;

		scanf("%d", &n);
		getBaseAndExponent(n, &base, &exponent);
		summation += expo(base, exponent);
	}

	printf("%d\n", summation);

	return 0;
}