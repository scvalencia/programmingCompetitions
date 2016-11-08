#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dominant[] = {11, 4, 3, 20, 10, 14, 0, 0};
int nonDominant[] = {11, 4, 3, 2, 10, 0, 0, 0};

int cardToValue(char card) {
	if(card == 'A')
		return 0;
	if(card == 'K')
		return 1;
	if(card == 'Q')
		return 2;
	if(card == 'J')
		return 3;
	if(card == 'T')
		return 4;
	if(card == '9')
		return 5;
	if(card == '8')
		return 6;
	if(card == '7')
		return 7;
	return -1;
}

int main(int argc, char const *argv[]) {
	int hands, ans = 0;
	char dominantSuit;
	char* card = (char*) malloc(sizeof(char) * 2);

	scanf("%d %c", &hands, &dominantSuit);
	hands *= 4;

	while(hands--) {
		scanf("%s", card);
		char number = card[0], suit = card[1];
		int num = cardToValue(number);

		if(suit == dominantSuit)
			ans += dominant[num];
		else
			ans += nonDominant[num];

	}

	printf("%d\n", ans);
	return 0;
}