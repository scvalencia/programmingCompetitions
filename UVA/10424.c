#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int equivalentNumber(char ch) {
	return (tolower(ch) - 96);
}

int sumOfDigits(int number) {
	int ans = 0;
	while(number != 0) {
		int digit = number % 10;
		ans += digit;
		number /= 10; 
	}
	return ans;
}

int oneDigit(int number) {
	while(sumOfDigits(number) / 10 != 0)
		number = sumOfDigits(number);
	return sumOfDigits(number);
}

int main(int argc, char const *argv[]) {
	char first[26], scnd[26];
	while(scanf("%s", first)) {
		scanf("%s", scnd);
		int firstRep = 0, scndRep = 0;
		int lenFirst = strlen(first), lenScnd = strlen(scnd), i = 0;
		for(; i < lenFirst; i++) {
			char this = first[i];
			if(isalpha(this))
				firstRep += equivalentNumber(first[i]);
		}
		i = 0;
		for(; i < lenScnd; i++) {
			char this = scnd[i];
			if(isalpha(this))
				scndRep += equivalentNumber(scnd[i]);
		}

		printf("%.2f %c\n", ((float)oneDigit(scndRep) / (float)oneDigit(firstRep)) * 100.0, '%') ;

	}
	printf("%d\n", equivalentNumber('Z'));
	return 0;
}