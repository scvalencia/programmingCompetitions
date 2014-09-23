#include <stdio.h>
#include <stdbool.h>

bool optimizer = true;

long long int power3(long long int n) {
	return n * n * n;
}

long long int summation3(long long int n) {
	long long int summation1 = n*(n + 1)/2;
	return summation1 * summation1;
}

int main(int argc, char *argv[]) {
	long long int a;	
	while(scanf("%lld", &a) != EOF) {
		if(optimizer) 
			printf("%lld\n", summation3(a));
		else {
			long long int i = 1, sum = 0;
			for(; i <= a; i++)
				sum += power3(i);		
			printf("%lld\n", sum);
		}
	}
	return 0;
}