#include <stdio.h>
#include <stdlib.h>

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
	int n, m;
	while((scanf("%d %d", &n, &m) == 2) && (n + m != 0)) {
		int* parent = (int*) malloc(sizeof(int) * n);
		int* size = (int*) malloc(sizeof(int) * n);

		int i = 0;
		for(; i < n; i++) {
			parent[i] = i; size[i] = 1;
		}

		while(m--) {
			int members, root, node;
			scanf("%d", &members);
			scanf("%d", &root);
			for(i = 0; i < members - 1; i++) {
				scanf("%d", &node);
				dsunion(parent, size, root, node);
			}
		}

		int count = 0;
		int target = dsfind(parent, 0);
		for(i = 0; i < n; i++) {
			if(dsfind(parent, i) == target)
				count++;
		}

		printf("%d\n", count);

	}
	return 0;
}