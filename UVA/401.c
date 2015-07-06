#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char giveReverse(char c);
bool isPalindrome(char word[]);
bool isMirroredString(char word[]);
bool isMirroredPalindrome(char word[]);

int main(int argc, char const *argv[]) {
	char word[1000];
	while((scanf("%s", word)) != EOF) {
		if(isMirroredPalindrome(word))
            printf("%s%s", word, " -- is a mirrored palindrome.");
        else if(isMirroredString(word))
        	printf("%s%s", word, " -- is a mirrored string.");
        else if(isPalindrome(word))
        	printf("%s%s", word, " -- is a regular palindrome.");
        else
        	printf("%s%s", word, " -- is not a palindrome.");
        printf("\n\n");
	}

	return 0;
}

char giveReverse(char c) {
	if (c == 'A') return 'A';
	if (c == 'E') return '3';
    if (c == 'H') return 'H';
    if (c == 'I') return 'I';
    if (c == 'J') return 'L';
    if (c == 'L') return 'J';
    if (c == 'M') return 'M';
    if (c == 'O') return 'O';
    if (c == 'S') return '2';
    if (c == 'T') return 'T';
    if (c == 'U') return 'U';
    if (c == 'V') return 'V';
    if (c == 'W') return 'W';
    if (c == 'X') return 'X';
    if (c == 'Y') return 'Y';
    if (c == 'Z') return '5';
    if (c == '1') return '1';
    if (c == '2') return 'S';
    if (c == '3') return 'E';
    if (c == '5') return 'Z';
    if (c == '8') return '8';
    return '_';
}

bool isPalindrome(char word[]) {
	int i = 0, length = strlen(word);
	for(; i < length / 2; i++)
		if(word[i] != word[length - 1 - i])
			return false;
    return true;
}

bool isMirroredString(char word[]) {
	int i = 0, length = strlen(word);
	for(; i < length / 2; i++) 
		if(giveReverse(word[i]) == '_' || word[length - 1 - i] != giveReverse(word[i]))
			return false;
    return true;
}

bool isMirroredPalindrome(char word[]) {
    return isPalindrome(word) && isMirroredString(word);
}