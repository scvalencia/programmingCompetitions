#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

	int n, w, h;
	scanf("%d %d %d", &n, &w, &h);

	double diag = sqrt(w * w + h * h);

	while(n--) {
		int match;
		scanf("%d", &match);
		printf("%s\n", (match <= diag) ? "DA" : "NE");
	}

	return 0;
}