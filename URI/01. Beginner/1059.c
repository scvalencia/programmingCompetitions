#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 2;

	while(i <= 100) {
		if(i % 2 == 0)
			printf("%d\n", i);
		i++;
	}
	
	return 0;
}