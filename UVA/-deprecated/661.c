#include <stdio.h>
#include <stdbool.h>
#define MAX(a, b) (a > b)? a : b

int main(int argc, char **argv) {
	int n, m, c;
	int sequenceCounter = 0;
	scanf("%d %d %d", &n, &m, &c);
	while(n != 0 && m != 0 && c != 0) {
		sequenceCounter++;
		int consumption[n];
		bool operations[m];
		int i = 0;
		int maxConsumtion = 0;
		int max = 0;
		bool fuse = false;
		for(; i < m; i++)
			operations[i] = false;
		for(i = 0;i < n; i++)
			scanf("%d", &consumption[i]);
		for(i = 0; i < m; i++) {
			int readed;
			scanf("%d", &readed);
			operations[readed - 1] = !operations[readed - 1];
			if(operations[readed - 1])
				maxConsumtion += consumption[readed - 1];
			else 
				maxConsumtion -= consumption[readed - 1];
			max = MAX(maxConsumtion, max);
			if(max > c)
				fuse = true;			
		}
		printf("Sequence %d\n", sequenceCounter);
		if(fuse)
			printf("Fuse was blown.\n");
		else {
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n", max);			
		}

		printf("\n");

		scanf("%d %d %d", &n, &m, &c);
	}
	return 0;
}