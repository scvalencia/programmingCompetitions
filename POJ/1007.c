#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int string_cmp(const void *a, const void *b) {
    const char *ia = *(const char **) a;
    const char *ib = *(const char **) b;
    return strcmp(ia, ib);
}


int main(int argc, char const *argv[]) {
	int size, cases, i = 0;
	scanf("%d %d", &size, &cases);
	char** array = malloc(sizeof(char*) * cases);
	for(; i < cases; i++)
		*(array + i) = malloc(sizeof(char) * size);
	for(i = 0; i < cases; i++)
		scanf("%s", *(array + i));

	qsort(array, sizeof(array) / sizeof(char *), sizeof(char *), string_cmp);

	for(i = 0; i < cases; i++)
		printf("%s\n", *(array + i));
	return 0;
}