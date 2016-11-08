#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int i = 0, ans = 0;
	bool freqs[45] = {false};

	while(i != 10) {
		int current;
		scanf("%d", &current);
		freqs[current % 42] = true;
		i++;
	}

	for(i = 0; i < 45; i++) if(freqs[i]) ans++;
	printf("%d\n", ans);
	
	return 0;
}