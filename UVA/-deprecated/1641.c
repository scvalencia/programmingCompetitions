#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	int h, w;
	while(scanf("%d %d", &h, &w) != EOF) {
		char matrix[h][w];
		int i = 0, j = 0;
		for(; i < h; i++) {
			char string[200];
			scanf("%s", string);
			j = 0;
			for(; j < strlen(string); j++)
				matrix[i][j] = string[j];
		}
		bool flag = false;
		double ans = 0;
		for(i = 0; i < h; i++) {
			for(j = 0; j < w; j++) {
				char charAt = matrix[i][j];
				if(charAt == '/' || charAt == '\\') {
					ans += 0.5;
					flag = !flag;
				}
				else if(charAt == '.' && flag) {
					ans += 1;
				}
			}
		}
		printf("%d\n", (int) ans);
	}
	return 0;
}