#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main(int argc, char **argv) {
	int persons, budget, hotels, days;
	while(scanf("%d %d %d %d", &persons, &budget, &hotels, &days) != EOF) {
		int i = 0;
		int array[days];
		int min = INT_MAX;
		for(; i < hotels; i++) {
			int price, j = 0;
			scanf("%d", &price);
			for(; j < days; j++) {
				scanf("%d", &array[j]);
				if(persons <= array[j] && persons * price <= budget)
					if(persons * price < min) 
						min = persons * price;
			}
		}
		(min <= budget)? printf("%d\n", min) : printf("stay home\n");
	}
	return 0;
}