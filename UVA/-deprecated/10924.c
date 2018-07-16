#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 22

int get_cost(char c) {
	if('a' <= c && c <= 'z')
		return c - 96;
	else
		return (c - 65) + 27;
}

bool is_prime(int number) {
	int i = 2;
	for(; i * i <= number; i++)
		if(number % i == 0)
			return false;
	return true;
}

int main(int argc, char const *argv[]) {
	char* word = malloc(SIZE * sizeof(char));
	int i, summation;
	bool flag;

	while(scanf("%s", word) != EOF) {
		summation = 0;
		while(*word) {
			summation += (get_cost(*word++));
		}
		flag = is_prime(summation);
		printf("%s\n", (flag) ? "It is a prime word." : "It is not a prime word.");
	}

	free(word);
	return 0;
}