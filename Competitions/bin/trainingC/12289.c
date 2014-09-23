#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	int TC;
	scanf("%d", &TC);
	char* classify3[4] = {"one", "two", "six", "ten"};
	char* classify4[3] = {"four", "five", "nine"};
	char* classify5[3] = {"three", "seven", "eight"};
	int real3[4] = {1, 2, 6, 10};
	int real4[3] = {4, 5, 9};
	int real5[3] = {3, 7, 8};
	int i, j;

	while(TC--) {
		char word[6];
		scanf("%s", word);
		int length = strlen(word);
		if(length == 3) {
			for(i = 0; i < 4; i++) {
				char* nWord = classify3[i];
				int errors = 0;
				for(j = 0; j < 3; j++) {
					if(word[j] != nWord[j])
						errors++;
				}
				if(errors <= 1)
					printf("%d\n", real3[i]);
			}
		}
		else if(length == 4) {
			for(i = 0; i < 3; i++) {
				char* nWord = classify4[i];
				int errors = 0;
				for(j = 0; j < 4; j++) {
					if(word[j] != nWord[j])
						errors++;
				}
				if(errors <= 1)
					printf("%d\n", real4[i]);
			}
		}
		else {
			for(i = 0; i < 3; i++) {
				char* nWord = classify5[i];
				int errors = 0;
				for(j = 0; j < 5; j++) {
					if(word[j] != nWord[j])
						errors++;
				}
				if(errors <= 1)
					printf("%d\n", real5[i]);
			}
		}
	}
	return 0;
}