#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define C 0
#define G 1
#define T 2

int charHash(char ch) {
	return (ch == 'C') ? C : ((ch == 'G') ? G : T);
}

int main(int argc, char const *argv[]) {

	int* array = (int*) calloc(0, sizeof(int) * 3);
	char* string = (char*) malloc(sizeof(char) * 50);

	scanf("%s", string);

	for(int i = 0; i < strlen(string); i++)
		array[charHash(*(string + i))]++;

	int ans = 0;

	for(int i = 0; i < 3; i++)
		ans += *(array + i) * *(array + i);

	while(array[C] && array[G] && array[T]) {
		array[C]--;
		array[G]--;
		array[T]--;
		ans += 7;
	}

	printf("%d\n", ans);

	return 0;
}