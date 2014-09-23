#include <stdio.h>
#include <stdbool.h>

long int solve_recursive(long int a, long int b, int* iterations);
long int solve(long int a, long int b, int* iterations);
long int reverseNumber(long int num);
bool isPalindrome(long int num);

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int number;
		int val = 0;
		scanf("%d", &number);
		int ans = solve_recursive(number, 0, &val);
		printf("%d %d\n", val, ans);
	}	
	return 0;
}

// Call as solve_recursive(number, 0, &val);
long int solve_recursive(long int a, long int b, int* iterations) {
	int rev = reverseNumber(a + b);
	if((a + b) == rev)
		return a + b;
	else {
		*iterations += 1;
		return solve(a + b, rev, iterations);
	}
}

long int solve(long int a,long int b, int* iterations) {
	while(true) {
		int rev_a = reverseNumber(a);		
		if(a == rev_a)
			break;
		a = a + b;
		b = rev_a;
		*iterations += 1;
	}
	return a;
}

long int reverseNumber(long int num) {
	int n = num;
	int rev = 0;
	while (num > 0)
	{
		int dig = num % 10;
		rev = rev * 10 + dig;
		num = num / 10;
	}
	return rev;
}

bool isPalindrome(long int num) {
	int n = num;
	int rev = 0;
	while (num > 0)
	{
		int dig = num % 10;
		rev = rev * 10 + dig;
		num = num / 10;
	}
	return rev == num;
}