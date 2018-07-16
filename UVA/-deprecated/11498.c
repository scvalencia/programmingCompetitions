#include <stdio.h>

int main(int argc, char **argv) {
	int queries;
	scanf("%d", &queries);
	while(queries != 0) {
		int x0, y0;
		scanf("%d %d", &x0, &y0);
		while(queries--) {
			int a, b;
			scanf("%d %d", &a, &b);
			if(a == x0 || b == y0)
				printf("divisa\n");
			else if(a > x0 && b > y0)
				printf("NE\n");
			else if(a < x0 && b > y0)
				printf("NO\n");
			else if(a < x0 && b < y0)
				printf("SO\n");			
			else if(a > x0 && b < y0)
				printf("SE\n");
		}
		scanf("%d", &queries);
	}
	return 0;
}