#include <stdio.h>

#define CALORIES_PER_BOTTLE 400

int main(int argc, char const *argv[]) {
	int TC, calories;
	scanf("%d", &TC);

	while(TC--) {
		scanf("%d", &calories);
		int count = calories / CALORIES_PER_BOTTLE;
		if(count * CALORIES_PER_BOTTLE < calories)
			count++;
		printf("%d\n", count);
	}

	return 0;
}