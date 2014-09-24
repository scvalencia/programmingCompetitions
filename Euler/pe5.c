#include <stdio.h>

long int GCD(long int a, long int b);
long int LCM(long int a, long int b);
int main(void)
{
	int a = 1;
	for(int i = 1; i <= 20; i++)
	{
		a = LCM(a,i);	
			
	}
	printf("%ld\n",a);
	
	
}
long int GCD(long int a, long int b)
{
	long int resp;
	if (b == 0)
		resp = a;
	else
		resp = GCD(b, a%b);
	return(resp);
}
long int LCM(long int a, long int b)
{
	long int resp;
	long int gcd;
	gcd = GCD(a,b);
	resp = (a*b)/gcd;
	return(resp);
}