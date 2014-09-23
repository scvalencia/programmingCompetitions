#include <stdio.h>
#define T 0
#define B 1
#define W 2
#define E 3
#define N 4
#define S 5

void shift(char command, int array[6]);

int main(int argc, char const *argv[]) {
	int counter;
	while(scanf("%d", &counter) && counter != 0) {
		int cmd = 0;
		int array[6] = {1, 6, 3, 4, 2, 5};
		char command[6];
		while(cmd < counter) {
			scanf("%s", command);
			shift(command[0], array);			
			cmd++;
		}
		printf("%d\n", array[0]);
	}
	return 0;
}

void shift(char command, int array[6]) {

	int top = array[0];
	int bottom = array[1];
	int west = array[2];
	int east = array[3];
	int north = array[4];
	int south = array[5];

	switch(command) {
		case 'n':
			array[N] = top;
			array[B] = north;
			array[S] = bottom;
			array[T] = south;
			break;

		case 's':
			array[B] = south;
			array[S] = top;
			array[T] = north;
			array[N] = bottom;
			break;

		case 'w':
			array[W] = top;
			array[B] = west;
			array[E] = bottom;
			array[T] = east;
			break;

		case 'e':
			array[E] = top;
			array[T] = west;
			array[W] = bottom;
			array[B] = east;
			break;

		default:
			break;
	}
}