#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 16

char song[SIZE][SIZE] = {"Happy", "birthday", "to", "you", "Happy",
				 	     "birthday", "to", "you", "Happy", "birthday",
						 "to", "Rujia", "Happy", "birthday", "to", "you"};

bool allpassed(int size, bool array[size]) {
	bool ans = true;
	int i = 0;
	for(; i < size; i++)
		if(!array[i])
			return false;
	return ans;
}

int main(int argc, char const *argv[]) {
	int names;
	scanf("%d", &names);
	if(names == 0)
		exit(0º);
	char persons[names][100];
	bool reg[names];
	int i = 0, j = 0;
	while(i < names) {
		scanf("%s", persons[i]);
		reg[i] = false;
		i++;
	}
	int counter = 0, progress = 0;
	bool notYet = true;
	while(notYet) {
		if(counter % 15 == 0 && allpassed(names, reg))
			notYet = false;
		else
			counter = counter % 15;
		printf("%s: %s\n", persons[progress % names], song[counter]);
		reg[progress % names] = true;
		progress++;
		counter++;		
	}
	return 0;
}