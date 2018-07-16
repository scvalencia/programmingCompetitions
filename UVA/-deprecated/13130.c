#include <stdio.h>

int main(int argc, char const *argv[]) {

	int array[5];
	int TC;

	scanf("%d", &TC);

	while(TC--) {
		scanf("%d%d%d%d%d", &array[0], &array[1], &array[2], &array[3], &array[4]);

		int j;

		for(j = 0; j < 4; j++)

			if(array[j] != array[j + 1] - 1)
				break;

		printf("%s\n", (j == 4) ? "Y" : "N");
	}

	return 0;
}