#include <stdio.h>

int main(int argc, char const *argv[]) {
	int row_number, row, col;
	float sum = 0.0;
	char ch;

	scanf("%d\n%c", &row_number, &ch);

	for(row = 0; row < 12; row++) 
		for(col = 0; col < 12; col++) {
			float number;
			scanf("%f", &number);
			if(row == row_number)
				sum += number;
		}

	printf("%.1f\n", (ch == 'S') ? sum : sum / 12.0);

	return 0;
}