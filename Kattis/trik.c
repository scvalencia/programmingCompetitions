#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void move(char move, int* p1, int* p2, int* p3) {
	if(move == 'A')
		swap(p1, p2);
	if(move == 'B')
		swap(p2, p3);
	if(move == 'C')
		swap(p1, p3);
}

int main(int argc, char const *argv[]) {

	int p1 = 1, p2 = 0, p3 = 0, i = 0;
	char* string = (char*) malloc(sizeof(char) * 50);

	scanf("%s", string);

	for(; i < strlen(string); i++) {
		char ch = *(string + i);
		move(ch, &p1, &p2, &p3);
	}

	int pos = p1 ? 1 : (p2 ? 2 : (p3 ? 3 : -1));
	printf("%d\n", pos);

	return 0;
}