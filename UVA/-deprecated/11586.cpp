#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
	int TC, temp;
	scanf("%d", &TC);
	temp = TC;
	TC++;
	while(TC > 0) {
		string input;
		getline(cin, input);
		if(input.length() == 0 && TC != (temp + 1))
			continue;
		size_t M = count(input.begin(), input.end(), 'M');
		size_t F = count(input.begin(), input.end(), 'F');
		if(TC != (temp + 1))
			printf("%s\n", (M == F)? "LOOP" : "NO LOOP");
		TC--;
	}

	return 0;
}