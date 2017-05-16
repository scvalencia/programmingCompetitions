#include <vector>
#include <algorithm>

#include <math.h>
#include <stdio.h>

std::vector<int> getDigitsVector(int number) {
	std::vector<int> digits;

	while(number != 0) {
		int digit = number % 10;
		digits.push_back(digit);

		number = number / 10;
	}

	std::sort(digits.begin(), digits.end());

	return digits;
}

int getNumberFromDigits(std::vector<int> digits) {
	int power = pow(10, digits.size() - 1);
	int number = 0, current = 0;

	while(power != 0) {
		int digit = digits[current++];
		number += digit * power;
		power /= 10;
	}

	return number;
}

int main(int argc, char const *argv[]) {

	int number;
	scanf("%d", &number);

	int index = -1;
	bool flag = false;

	std::vector<int> digits = getDigitsVector(number);

    do {

    	int current = getNumberFromDigits(digits);
    	
    	if(index != -1) {

    		flag = true;
    		printf("%d\n", current);
    		break;

    	} else if(number == current)
    		index = 1;

    } while(std::next_permutation(digits.begin(), digits.end()));

    if(!flag)
    	printf("0\n");

    return 0;
}