#include <stdio.h>
#include <stdlib.h>

#define EARTH 365
#define MARS  687

int main(int argc, char const *argv[]) {

	int e, m;
	int currentCase = 0;

	while(scanf("%d %d", &e, &m) == 2) {

		int days = 0;
		while(e != 0 || m != 0) {
			days++;
			e = (e + 1) % 365;
			m = (m + 1) % 687;
		}

		printf("Case %d: %d\n", ++currentCase, days);
	}

	return 0;
}