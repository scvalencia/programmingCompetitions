#include <stdio.h>
#define N 100

int main()
{
	long int squares = 1, sum = 0;
	for(int i = 1; i<= N; i++)
	{
		squares = i * i;
		sum += squares;		
	}
	long int identity = (N*(N+1))/2;
	long int identitu = identity*identity;
	long int difference = identitu - sum;
	printf("%ld",difference);
	
}