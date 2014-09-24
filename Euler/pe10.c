#include<stdio.h>
#include <math.h>
int is_prime(int num);
int main()
{
	long int sum;
	for(int i = 2; i < 2000000; i++)
	{
		if (is_prime(i) == 1)
		{
			sum+=i;			
		}
	}
	printf("%ld",sum);
	
}
int is_prime(int num)
{
  int i;
  if (num == 2) return 1;
  for (i=2;i<sqrt(num)+1;i++) if (num%i==0) return 0;
  return 1;
}