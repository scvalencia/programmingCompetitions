#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int length, i;

	while(scanf("%d", &length) && length) {
		char* line = (char*) malloc(sizeof(char) * (length + 1));
		scanf("%s", line);

		char current_char = '.';
		int min = 10E7, last_restaurant = -1, last_drugstore = -1;

		for(i = 0; i < strlen(line); i++) {
			char current = *(line + i);

			if(current == 'Z') {
				min = 0;
				break;
			} else if(current == 'R') {
				last_restaurant = i;
				if(last_drugstore != -1) {
					int distance = last_restaurant - last_drugstore;
					min = (distance < min) ? distance : min;
				}
			} else if(current == 'D') {
				last_drugstore = i;
				if(last_restaurant != -1) {
					int distance = last_drugstore - last_restaurant;
					min = (distance < min) ? distance : min;
				}
			}
			
		}

		free(line);
		printf("%d\n", min);
	}

	return 0;
}