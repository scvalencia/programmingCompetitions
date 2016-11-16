#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 10

int main(int argc, char const *argv[]) {

	int TC;
	scanf("%d", &TC);

	while(TC--) {
		char* string = (char*) malloc(sizeof(char) * MAX_LENGTH);
		scanf("%s", string);

		long long int product = 1LL;
		int lenght = strlen(string);
		int low = 0, high = lenght - 1;
		bool palindrome = true;

		while(low < high) {
			char chl = string[low];
			char chh = string[high];

			int valuel = chl - 'a' + 1;
			int valueh = chh - 'a' + 1;

			if(chl != chh)
				palindrome = false;

			product *= (valuel * valueh);

			low++;
			high--;

		}

		if(lenght % 2 == 1)
			product *= string[high--] - 'a' + 1;

		if(palindrome)
			printf("%s\n", "Palindrome");
		else
			printf("%lld\n", product);
	}

	return 0;
} 