#include <locale.h>
#include <stdio.h>
#include <math.h>
#define MONTHS 12

int main(int argc, char const *argv[]) {
	setlocale(LC_NUMERIC, "");
	int TC, i, counter = 0;
	double ammount, ans;
	double integer = 0.0, fractional = 0.0, aux = 0.0;
	scanf("%d", &TC);
	while(TC--) {
		ammount = 0.0; ans = 0.0;
		i = 0;
		while(i < MONTHS) {
			scanf("%lf", &ammount);
			ans += ammount/MONTHS;
			i += 1;
		}

		printf("%d $%'.2lf\n", ++counter, ans);
	}
	return 0;
}