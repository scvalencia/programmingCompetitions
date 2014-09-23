#include <stdio.h>

int main(void) {
	int TC;
	scanf("%d", &TC);
	int cases = 1;
	while(TC--) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a <= 20 && b <= 20 && c <= 20) 
			printf("Case %d: good\n", cases);
		else
			printf("Case %d: bad\n", cases);
		cases++;		
	}
}