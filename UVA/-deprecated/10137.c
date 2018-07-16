#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
	int flag;
	scanf("%d", &flag);
	while(flag != 0) {
		double costs[flag];
		double average = 0;
		double acum = 0;
		int i = 0;
		for(; i < flag; i++) { 
			scanf("%lf", &costs[i]);
			average += costs[i];
		}
		average /= flag;
		for(i = 0; i < flag; i++)
			if(costs[i] > average)
				acum  += (double) (long) ((costs[i] - average) * 100.0) / 100.0;
		printf("$%.2lf\n", acum);
		scanf("%d", &flag);
	}
	return 0;
}