#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
	string str;
	while(getline(cin, str)) {
		if(str == "DONE")
			break;
		string copy = "";
		int i = 0, l = str.size();
		for(; i < l; i++)
			if(isalpha(str[i]))
				copy += tolower(str[i]);
		string flag = copy;
		reverse(copy.begin(), copy.end());
		if(copy == flag)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;
}

