#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

	int banks, debts, i, banksCpy;

	while(scanf("%d %d", &banks, &debts) && (banks + debts != 0)) {
		int* reserves = malloc(sizeof(int) * banks);
		banksCpy = banks;

		i = 0;
		while(banksCpy--) {
			scanf("%d", (reserves + i));
			i++;
		}

		while(debts--) {
			int d, c, v;
			scanf("%d %d %d", &d, &c, &v);

			reserves[d - 1] -= v;
			reserves[c - 1] += v;
		}

		bool ans = true;
		for(i = 0; i < banks; i++)
			ans &= (*(reserves + i) >= 0);

		printf("%c\n", (ans) ? 'S' : 'N');

	}

	return 0;
}