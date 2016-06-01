#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int dsfind(int* parent, int p) {
	while(p != *(parent + p)) p = *(parent + p);
	return p;
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d\n", &TC);
	char query;
	int computer1, computer2, n;
	int rootP, rootQ, yes, no, i;

	while (TC--) {
		scanf("%d\n\n", &n);
		int* parent = malloc(sizeof(int) * (n + 1));
		int* size = malloc(sizeof(int) * (n + 1int));

		yes = 0; no = 0;

		i = 0;
		for(; i < n; i++) {
			*(parent + i) = i;
			*(size + i) = 0;
		}

		while(scanf("%c %d %d\n", &query, &computer1, &computer2) == 3) {
			rootP = dsfind(parent, computer1);
			rootQ = dsfind(parent, computer2);

			if(query == 'c') {

			    if(rootP == rootQ)
			    	continue;

			    if (*(size + rootP) < *(size + rootQ)) {
			    	*(parent + rootP) = rootQ;
			    	*(size + rootQ) += *(size + rootP);
			    } else {
			    	*(parent + rootQ) = rootP;
			    	*(size + rootP) += *(size + rootQ);
			    }
			} else {
				if(rootP == rootQ)
					yes++;
				else
					no++;
			}
		}

		printf("%d,%d\n", yes, no);

		if (TC)
			printf("\n");
	}
	return 0;
}