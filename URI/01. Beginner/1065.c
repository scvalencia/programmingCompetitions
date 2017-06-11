#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 0, even = 0;

	while(i++ < 5) {
		int number;
		scanf("%d", &number);

		if(number % 2 == 0)
			even++;
	}

	printf("%d valores pares\n", even);
	
	return 0;
}