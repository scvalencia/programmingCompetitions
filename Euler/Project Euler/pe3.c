#include <stdio.h>
#include <stdbool.h>
bool palyndromic(int number);
int main(void)
{
	int n;
	printf("Introduce a number: ");
	scanf("%d",&n);
	printf(palyndromic(121)? 1:0);
	
}
bool palyndromic(int number)
{
	n1 = n;
	/* logic */
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	 }
	return (n1 == rev);
}