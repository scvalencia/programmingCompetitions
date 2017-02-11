#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX(a, b) ((a) > (b)) ? (a) : (b)
#define MIN(a, b) ((a) < (b)) ? (a) : (b)

int shapeNumber(int a, int b) {
	int max = MAX(a, b);
	int min = MIN(a, b);

	return max * 10 + min;
}

bool isHighest(int number) {
	return number == 21;
}

bool isPair(int number) {
	return (number / 10) == (number % 10);
}

int main(int argc, char const *argv[]) {

	int d11, d12, d21, d22; 
	do {
		scanf("%d %d %d %d", &d11, &d12, &d21, &d22);
		int frst = shapeNumber(d11, d12), scnd = shapeNumber(d21, d22);

		int winner = (frst > scnd) ? 1 : 2;

		bool highest1 = isHighest(frst), highest2 = isHighest(scnd);
		bool pair1 = isPair(frst), pair2 = isPair(scnd);

		if(frst == 0)
			break;

		else if(frst == scnd)
			printf("Tie.\n");

		else {

			if(highest1 || highest2) 
				winner = (frst == 21) ? 1 : 2;

			else if(pair1 && pair2)
				winner = (frst > scnd) ? 1 : 2;

			else if(pair1) winner = 1;
			else if(pair2) winner = 2;


			printf("Player %d wins.\n", winner);
		}

	} while(d11 != 0 || d12 != 0 || d21 != 0 || d22 != 0);

	return 0;
}