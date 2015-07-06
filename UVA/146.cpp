#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>

int main(int argc, char const *argv[]) {
	std::string line;
	while(true) {
		std::cin >> line;
		if(line == "#")
			break;
		if(!std::next_permutation(line.begin(), line.end()))
			std::cout << "No Successor" << std::endl;
		else
			std::cout << line << std::endl;
	}
	return 0;
}

/*
#include <algorithm>
#include <cstdio>
#include <cstring>
int main()
{
    char str[51];
    while(gets(str) && strcmp(str, "#")){
        int i, len = strlen(str);
        for(i = len-1; i > 0; i--)
            if(str[i] > str[i-1])   break;
        if(i == 0)  puts("No Successor");
        else{
            for(int j = len-1; j > 0; j--)
                if(str[j] > str[i-1]){
                    std::swap(str[j], str[i-1]);
                    std::sort(str+i, str+len);
                    break;
                }
            puts(str);
        }
 
    }
    return 0;
}
*/