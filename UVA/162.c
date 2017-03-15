#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DECK_SIZE 52

enum Suit {ZS, S, H, D, C};

enum Rank {ZR, A, R2, R3, R4, R5, R6, R7, R8, R9, T, J, Q, K};

enum Rank numbered_ranks[] = {ZR, A, R2, R3, R4, R5, R6, R7, R8, R9};

struct card {
	enum Suit suit;
	enum Rank rank;
};

struct player {
	int turn;
	struct card* heap;
};

struct player init_player(int turn) {
	struct player new_player;

	new_player.turn = turn;
	new_player.heap = malloc(sizeof(struct card) * DECK_SIZE);

	struct card null_card = {ZS, ZR};

	int i = 0;
	for(; i < DECK_SIZE; i++)
		new_player.heap[i] = null_card;

	return new_player;
}

enum Suit char2suit(char ch) {

	switch(ch) {
		case 'S':
			return S;
		case 'H':
			return H;
		case 'D':
			return D;
		case 'C':
			return C;
	}

	return ZS;
}

enum Rank char2rank(char ch) {

	switch(ch) {
		case 'A':
			return A;
		case 'T':
			return T;
		case 'Q':
			return Q;
		case 'K':
			return K;
		default:
			return numbered_ranks[ch - '0'];
	}

	return ZR;
}

int main(int argc, char const *argv[]) {

	char terminator_char;

	while(true) {

		int lines = 0;

		while(lines != 4) {

			int cards = 0;

			while(cards != 13) {

				scanf("%c", &terminator_char);
				enum Suit suit = char2suit(terminator_char);
				scanf("%c", &terminator_char);
				enum Rank rank  = char2rank(terminator_char);
				scanf("%c", &terminator_char);

				printf("%d %d\n", suit, rank);

				cards++;

			}

			lines++;

			printf("\n");

		}

		break;
	}

	/*
	struct player p1 = init_player(1);

	printf("%d\n", p1.turn);

	for(int i = 0; i < DECK_SIZE; i++) 
		printf("%d %d\n", p1.heap[i].suit, p1.heap[i].rank);
	*/

	return 0;
}