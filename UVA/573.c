#include <stdio.h>
#include <math.h>

int solve(int H, int U, int D, int F) {
	int day; 
	float initialHeight, distanceClimbed, heighAfterClimbing, heighAfterSliding;
	day = 1;
	initialHeight = 0.0;
	distanceClimbed = (float) U;
	heighAfterClimbing = initialHeight + distanceClimbed;
	heighAfterSliding = heighAfterClimbing - (float) D;
	float factor = distanceClimbed / (float) F;
	while((int)heighAfterClimbing < H) {
		day += 1;
		//printf("%f %f %f %f\n", initialHeight, distanceClimbed, heighAfterClimbing, heighAfterSliding);		
		initialHeight = heighAfterSliding;
		factor = distanceClimbed / (float) F;
		distanceClimbed = distanceClimbed - factor;
		heighAfterClimbing = initialHeight + distanceClimbed;
		if(heighAfterClimbing < 0 || distanceClimbed < 0)
			break;
		heighAfterSliding = heighAfterClimbing - (float) D;
		
	}
	return day;
}

int main(int argc, char const *argv[]) {
	printf("%d\n", solve(6, 3, 1, 10));
	printf("%d\n", solve(10, 2, 1, 50));
	printf("%d\n", solve(1, 1, 1, 1));

	return 0;
}