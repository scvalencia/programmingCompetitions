#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	char line[1000009];
	int cases = 1;
	int i, j, queries, temp;
	while((scanf("%s", line) != EOF) || line[0] != '\n') {
		scanf("%d", &queries);
		printf("Case %d:\n", cases);
		while(queries--) {
			scanf("%d %d", &i, &j);
			if(i > j) {
				temp = i;
				i = j;
				j = temp;
			}
			bool ans = true;
			char current = line[i];
			for(; i <= j; i++)
				if(line[i] != current) {
					ans = false;
					break;
				}
			printf("%s\n", (ans) ? "Yes" : "No");
		}
		cases++;
	}
	return 0;
}