#include <stdio.h>

int main(int argc, char const *argv[]) {
	int milestones, speed;

	while(scanf("%d", &milestones) && milestones != -1) {
		int miles = 0, timeCurr = 0, timePrev = 0;
		while(milestones--) {
			scanf("%d %d", &speed, &timePrev);
			miles += speed * (timePrev - timeCurr);
			timeCurr = timePrev;
		}
		printf("%d miles\n", miles);
	}
	
	return 0;
}