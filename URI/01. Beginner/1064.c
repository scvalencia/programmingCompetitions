#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i = 0, positives = 0, count = 0;
	float summation = 0.0;

	while(i++ < 6) {
		float number;
		scanf("%f", &number);

		if(number > 0) {
			summation += number;
			positives++;
			count++;
		}
		
	}

	summation /= count;
	printf("%d valores positivos\n%.1f\n", positives, summation);
	
	return 0;
}