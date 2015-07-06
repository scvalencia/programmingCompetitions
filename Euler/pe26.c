#include <stdio.h>

int main(int argc, char const *argv[]) {

	int max = -1, i = 3;

	for(; i < 1000; i++) {
		if(i % 2 == 0 || i % 5 == 0) 
			continue;
		int u = 0, a = 1;
		do {
		    ++u;
		    a = (10 * a) % i;
		} while(a != 1);
		if(u > max)
			max = i;
	}

	printf("%d\n", max);
	return 0;
}