#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 1000
#define NUMBERS 14

bool P[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool K[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool H[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool T[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int tointeger(char dec, char unt) {
	int ans = 10 * (dec - '0');
	ans += (unt - '0');
	return ans;
}

int solve(bool array[NUMBERS]) {
	int i = 1, ans = NUMBERS - 1;
	for(; i < NUMBERS; i++) if(array[i]) ans--;
	return ans;
}

int main(int argc, char const *argv[]) {

	char* string = (char*) malloc(sizeof(char) * MAX_SIZE);
	scanf("%s", string);
	bool broke = false;
	int i = 0;

	for(; i < strlen(string); i += 3) {
		char suite = *(string + i);
		int number = tointeger(*(string + (i + 1)), *(string + (i + 2)));

		bool* array = (bool*) malloc(sizeof(bool) * NUMBERS);
		array = (suite == 'P') ? P : ((suite == 'H') ? H : ((suite == 'T') ? T : K));

		if(*(array + number)) {
			printf("GRESKA\n");
			broke = true;
			break;
		} else *(array + number) = true;
	}

	if(!broke)
		printf("%d %d %d %d\n", solve(P), solve(K), solve(H), solve(T));

	return 0;
}