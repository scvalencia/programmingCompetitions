#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
	char string[110];
	scanf("%s", string);

	int low = 0;
	int high = strlen(string) - 1;

	while(low < high) {
		char cl = *(string + low);
		char ch = *(string + high);

		if(cl != ch)
			break;

		low++;
		high--;
	}

	printf("%s\n", (low >= high) ? "YES" : "NO");
	return 0;
}