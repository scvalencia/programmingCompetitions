/*
 * REFERENCE: https://www.youtube.com/watch?v=XKu_SEDAykw&t=1287s
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int TC, n, *bob, *alice, i, sb, sa;
	int pb = 0, pa = 0;
	int cb = 0, ca = 0;
	scanf("%d", &TC);

	while(TC--) {
		scanf("%d", &n);
		bob = (int*) malloc(sizeof(int) * n);
		alice = (int*) malloc(sizeof(int) * n);
		pb = pa = 0;
		cb = ca = 0;
		
		for(i = 0; i < n; i++) {
			scanf("%d", &bob[i]);
			sb += bob[i];
		}

		for(i = 0; i < n; i++) {
			scanf("%d", &alice[i]);
			sa += alice[i];
		}

		while(cb < n && ca < n) {
			pb = *(bob + cb);
			pa = *(alice + ca);

			if(pb > pa)
				ca++;
			else if(pb < pa)
				cb++;
			else
				break;
		}

		printf("%s\n", (pb > pa) ? "Bob" : ((pa > pb) ? "Alice" : "Tie"));
	}

	return 0;
} 