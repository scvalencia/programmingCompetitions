#include <stdio.h>

unsigned long int fibonacci[50];

void zeckendorf(int n) {

	unsigned long int fi = 0, first = 0;
	int largest_flag;
	int i = 1;
	for(; i < 50; i++) {
		if(fibonacci[i] > n) {
			largest_flag = i;
			break;
		}
	}
	first = fibonacci[largest_flag];
	while(fibonacci[largest_flag] >= 1) {

		fi = fibonacci[largest_flag];
		if(n >= fi) {
			n -= fi;
			largest_flag -= 1;
			printf("1");
		}
		else {
			if(fi == first) {
				largest_flag -= 1;
				continue;
			}
			else if(largest_flag == 1)
				break;
			else {
				largest_flag -= 1;
				printf("0");
			}
		}

	}

}


int main(int argc, char **argv) {

	fibonacci[1] = 1;
	fibonacci[2] = 1;
	int i = 3;
	for(; i < 50; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	int cases;
	scanf("%d", &cases);

	while(cases--) {
		int input;
		scanf("%d", &input);
		zeckendorf(input);
		printf("\n");
	} 

	return 0;
}