#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	int TC, gap, pgap, y1, y2, size;
	char space;
	bool ans;

	scanf("%d", &TC);

	while(TC--) {
		scanf("%c", &space);
		scanf("%d", &size);

		ans = true;

		scanf("%d %d", &y1, &y2);
		pgap = abs(y2 - y1);
		size--;

		while(size--) {
			scanf("%d %d", &y1, &y2);
			gap = abs(y2 - y1);
			if(gap != pgap) ans = false;
			pgap = gap;
		}

		printf("%s\n", ans ? "yes" : "no");

		if(TC != 0) printf("\n");
		
	}

	return 0;
}