#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int n, current, in = 0, out = 0;
	scanf("%d", &n);

	while(n--) {
		scanf("%d", &current);

		if(current >= 10 && current <= 20)
			in++;
		else
			out++;
	}
	
	printf("%d in\n%d out\n", in, out);

	return 0;
}