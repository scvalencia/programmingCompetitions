#include <stdio.h>
int palyndromic(int n);
int main()
{
   for(int i = 900; i <= 999; i++)
   {
   	for(int j = 900; j <= 999; j++)
   	{
   		if (palyndromic(i*j) == 1) printf("%d,%d,%d\n", i,j,i*j);
   	}
   }
}
int palyndromic(int n)
{
   int reverse = 0, temp = n; 
   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   } 
   if ( n == reverse ) return 1;
   else return 0;
}