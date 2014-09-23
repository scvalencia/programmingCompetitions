#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv) {
	int N, R, i;
	while(scanf("%d %d", &N, &R) == 2) {
		int alias = N;
		char* arrays[N];
		int counter = 0;
		while(N--) {
			char name[10];
			scanf("%s", name);
			arrays[counter++] = name;
			int B, CD, D;
			scanf("%d %d %d", &B, &CD, &D);
			int size = 2 * D;
			int bounds[size];
			int newCount = 0;
			for(; newCount < size; newCount++)
				scanf("%d", &bounds[newCount]);
			int Ci[D];

		}
		while(R--) {
			continue;
		}
		for(int j = 0; j < alias; j++)
			printf("%s\n", arrays[j]);
	}
	return 0;
}