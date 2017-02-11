#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int n, i, j;
	scanf("%d", &n);
	int freqs[6] = {0};

	for(i = 0; i < n; i++) {
		int current;
		scanf("%d", &current);
		freqs[--current]++;
	}

	int idx = -1;

	for(i = 5; i >= 0; i--)
		if(freqs[i] == 1) {
			idx = i;
			break;
		}


	if(idx == -1)
		printf("none\n");
	else
		printf("%d\n", idx);

	return 0;
}