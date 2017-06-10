#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, current;
	scanf("%d", &n);

	while(n--) {
		scanf("%d", &current);

		if(current == 0)
			printf("NULL\n");
		else 
			printf("%s %s\n", (current % 2 == 0) ? "EVEN" : "ODD",
				(current < 0) ? "NEGATIVE" : "POSITIVE");
	}

	return 0;
}