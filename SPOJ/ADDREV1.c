#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int digits(int number) {
	int ans = 0;
	while(number != 0) {
		number /= 10;
		ans++;
	}
	return ans;
}

void reversedToString(int number, int size, char array[size]) {
	int i = 0;
	while(number != 0 && i < size) {
		int toAppend = number % 10;
		if(toAppend == 0)
			continue;	
		array[i] = (char)('0' + toAppend);
		i++;
		number = number / 10;		
	}
}

int valueOf(int size, char number[size]) {
	int value = 0, i = 0, j = 1;
	for(; i < size; i++) {
		int n = (number[i] - '0');
		printf("%d\n", n);
		value +=  n * pow(10, size - j);
		j++;
	}
	return value;
}

void setArray(char string[]) {
	int weirdSize = strlen(string), i = 0;
	for(; i < weirdSize; i++)
		string[i] = ' ';
}

void detArray(char string[]) {
	int weirdSize = strlen(string), i = 0;
	for(; i < weirdSize; i++)
		if(!isdigit(string[i]))
			string[i] = ' ';
}

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	while(TC--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int digitsA = digits(a), digitsB = digits(b);
		char reversedValueA[digitsA], reversedValueB[digitsB];
		setArray(reversedValueA);
		setArray(reversedValueB);
		reversedToString(a, digitsA, reversedValueA);
		reversedToString(b, digitsB, reversedValueB);
		detArray(reversedValueA);
		detArray(reversedValueB);
		int ra = valueOf(digitsA, reversedValueA);
		int rb = valueOf(digitsB, reversedValueB);
		int sum = ra + rb;
		int digitsSum = digits(sum);
		char reversedValue[digitsSum];
		setArray(reversedValue);
		reversedToString(sum, digitsSum, reversedValue);
		printf("%d\n", valueOf(digitsSum, reversedValue));
	}
	return 0;
}