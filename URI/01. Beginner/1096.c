#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 1, j = 7, mod = 1;

	while(i != 9 || j != 5) {
		printf("I=%d J=%d\n", i, j);
		if(mod == 3) {
			mod = 1;
			i += 2;
			j = 7;
		} else {
			mod += 1;
			j -= 1;
		}
	}

	printf("I=%d J=%d\n", i, j);

	return 0;
}