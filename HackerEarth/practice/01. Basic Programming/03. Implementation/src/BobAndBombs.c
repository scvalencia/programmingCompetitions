#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_LENGTH 1000010
#define BOMB 'B'
#define WALL 'W'

bool anyBomb(char a, char b, char c, char d) {
	bool ans = false;

	if(a == BOMB)
		ans = true;
	else if(b == BOMB)
		ans = true;
	else if(c == BOMB)
		ans = true;
	else if(d == BOMB)
		ans = true;

	return ans;
}

int solve(char* string, int len) {
	int i = 0, count = 0, init = 0;
	char* padding = (char*) malloc(sizeof(char) * MAX_LENGTH + 10);
	char* copied = (char*) malloc(sizeof(char) * MAX_LENGTH + 10);

	padding[0] = padding[1] = WALL;
	padding[len + 2] = padding[len + 3] = WALL;
	copied[0] = copied[1] = WALL;
	copied[len + 2] = copied[len + 3] = WALL;

	for(; i != len; i++) {
		char ch = string[i];
		if(ch == BOMB) count++;
		padding[i + 2] = string[i]; copied[i + 2] = string[i];
	}

	init = count;

	for(i = 2; i != len + 2; i++) {
		char pre1 = padding[i - 1], pre2 = padding[i - 2];
		char pos1 = padding[i + 1], pos2 = padding[i + 2];

		if(padding[i] == BOMB) continue;

		if(anyBomb(pre1, pre2, pos1, pos2)) {
			copied[i] = BOMB;
			count++;
		}
	}

	return count - init;
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);

	while(TC--) {
		char* string = (char*) malloc(sizeof(char) * MAX_LENGTH);
		scanf("%s", string);
		int len = strlen(string);
		printf("%d\n", solve(string, len));
	}

	return 0;
}