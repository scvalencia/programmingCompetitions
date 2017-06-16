#include <stdio.h>

int main(int argc, char const *argv[]) {
	int hours, velocity;
	scanf("%d%d", &hours, &velocity);
	printf("%.3lf\n", (hours * velocity) / 12.0);

	return 0;
}