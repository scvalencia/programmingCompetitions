#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;

bool comparator(char a, char b) {
	return (tolower(a) == tolower(b)) ? a < b : tolower(a) < tolower(b);
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		string input;
		cin >> input;
		sort(input.begin(), input.end(), comparator);
		do {
			printf("%s\n", input.c_str());
		} while(next_permutation(input.begin(), input.end(), comparator));
	}
	return 0;
}