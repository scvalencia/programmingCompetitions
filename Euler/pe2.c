#include <stdio.h>
int main(void)
{
   int a1 = 1, a2 = 1, a3 = 2;
   int sum = 0;
	while (a3 < 4000000)
   {
		a3 = a1 + a2;
		if (a3 % 2 == 0)
			sum += a3;
		a1 = a2;
		a2 = a3;
	}
	printf("%d",sum);
	return 0;
}

