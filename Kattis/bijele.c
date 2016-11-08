#include <stdio.h>

int target[] = {1, 1, 2, 2, 2, 8};

int main(int argc, char const *argv[]) {

	int ks, qs, rs, bs, ns, ps;
	scanf("%d %d %d %d %d %d", &ks, &qs, &rs, &bs, &ns, &ps);

	printf("%d %d %d %d %d %d\n", *(target + 0) - ks, *(target + 1) - qs, 
		*(target + 2) - rs, *(target + 3) - bs, *(target + 4) - ns, *(target + 5) - ps);

	return 0;
}