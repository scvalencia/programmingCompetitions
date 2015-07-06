#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

int main () {
  	std::string moves = "0123456789";
	sort(begin(moves), end(moves));
	int i = 2;

	while (std::next_permutation(begin(moves), end(moves))) {
		if(i == 1000000) {
			std::cout << moves << std::endl;
			break;
		}
	    i++;
	}	

  	return 0;
}