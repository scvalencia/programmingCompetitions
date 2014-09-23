#include <stdio.h>
#include <math.h>
int is_prime(int num);
int main()
{
	int ans, counter = 0;
	for(int i = 2; i < 105000; i++)
	{
		if(is_prime(i) == 1) 
		{
			counter++;
			ans = i;
		}
		if(counter == 10001) break;
	}
	printf("%d",ans);
}
int is_prime(int num)
{
  int i;
  if (num == 2) return 1;
  for (i=2;i<sqrt(num)+1;i++) if (num%i==0) return 0;
  return 1;
}