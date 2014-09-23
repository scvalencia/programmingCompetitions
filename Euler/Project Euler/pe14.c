#include <stdio.h>
int collatz(long int n);
int big(int a, int b);
int main(void) 
{
	int larger, assignation, value;
	for(int i = 0; i <= 1000000; i++)
	{
		while (collatz(i) > assignation)
		{
			larger = big(collatz(i),assignation);
			assignation = collatz(i);
			value = i;	
		}
	}
	printf("%d",value);	
}
int collatz(long int n)
{
	int counter = 0;
	while (n > 1) 
	{
		if ((n % 2) == 1) n = 3 * n + 1;
		else n = n / 2;
		++counter;
	}
    return counter;
}
int big(int a, int b)
{
	if (a < b) return b;
	else return a;
}