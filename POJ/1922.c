#include <stdio.h>
#include <math.h>

#define DISTANCE 4.50
#define MAX_BOUND (40 * 100000)

int main(int argc, char const *argv[]) {
	int riders;

	while(scanf("%d", &riders) && riders) {
		int vi, ti, charley = MAX_BOUND;
		
		while(riders--) {
			int arrivalTime;
			scanf("%d %d", &vi, &ti);

			if(ti < 0 || vi == 0) continue;

			arrivalTime = ceil((double) ti + ( (DISTANCE * 3600.0) / (double) vi));

			if(arrivalTime < charley)
				charley = arrivalTime;
		}

		printf("%d\n", charley);
	}
	
	return 0;
}