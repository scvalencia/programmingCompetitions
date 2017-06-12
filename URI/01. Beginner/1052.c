#include <stdio.h>
#include <stdlib.h>

char* MONTHS[] = {"_", "January", "February", "March", "April", "May", "June", "July", 
					"August", "September", "October", "November", "December"};

int main(int argc, char const *argv[]) {
	int index;
	scanf("%d", &index);
	printf("%s\n", MONTHS[index]);
	return 0;
}