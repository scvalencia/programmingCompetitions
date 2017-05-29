#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int k, bound, i, distance, value;
	scanf("%d", &k);

	bound = ((k + 24) / 25) + 1;
	char nametag[bound];

	nametag[0] = 'a';

	if(bound == 2)
		nametag[1] = (char) ('a' + k);
	else {

		distance = 0;

		if(k % 25 != 0)
			distance = (25 - k % 25) / 2;

		nametag[1] = (char)('z' - distance);
		int value = nametag[1] - nametag[0];

		for (i = 2; i < bound; i++) {
			char prev = nametag[i - 1];
			char curr;

			if(i == bound - 1) {
				if(i % 2 == 0)
					curr = (char) (prev - (k - value));
				else
					curr = (char) (prev + (k - value));
			} else {
				curr = (i % 2 == 0) ? 'a' : 'z';
				value += abs(curr - prev);
			}

			nametag[i] = curr;
		}
	}

	for(i = 0; i < bound; i++)
		printf("%c", nametag[i]);

	printf("\n");

	return 0;
}
