#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dsfind(int* parent, int p) {
	while(p != *(parent + p)) p = *(parent + p);
	return p;
}

void dsunion(int* parent, int* size, int p, int q) {
	int rootP = dsfind(parent, p);
	int rootQ = dsfind(parent, q);

	if(rootP == rootQ) return;

	if (size[rootP] < size[rootQ]) {
		parent[rootP] = rootQ;
		size[rootQ] += size[rootP];
	} else {
		parent[rootQ] = rootP;
		size[rootP] += size[rootQ];
	}
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);

	while(TC--) {
		int n, m, max = 0;
		scanf("%d %d", &n, &m);

		int* parent = (int*) malloc(sizeof(int) * (n + 1));
		int* size = (int*) malloc(sizeof(int) * (n + 1));

		int i = 1;
		for(; i <= n; i++) { parent[i] = i; size[i] = 1;	}

		while(m--) {
			int a, b;
			scanf("%d %d", &a, &b);
			dsunion(parent, size, a, b);
		}

		for(i = 1; i <= n; i++) {
			int current = size[i];
			max = (current > max) ? current : max;
		}
		printf("%d\n", max);
	}

	return 0;
}