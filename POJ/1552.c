#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	while(true) {
		unsigned short* list = (unsigned short*) malloc(15 * sizeof(unsigned short));

		unsigned long current;
		scanf("%ld", &current);
		if(current == -1)
			break;
		else {
			int i = 0, n = 0, j = 0, ans = 0;
			*(list + (i++)) = current;
			while(current != 0) {
				scanf("%ld", &current);
				*(list + (i++)) = current; 
			}

			n = i;
			
			for(i = 0; i < n - 1; i++) {
				unsigned short value = *(list + i);
				for(j = 0; j < n - 1; j++) {
					unsigned short possibleDouble = *(list + j);
					if(possibleDouble == 2 * value) {
						ans++;
						break;
					}
				}
			}
			printf("%d\n", ans);
		}
	}
}