#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 0, positives = 0;

	while(i++ < 6) {
		float number;
		scanf("%f", &number);

		if(number > 0)
			positives++;
	}

	printf("%d valores positivos\n", positives);
	
	return 0;
}