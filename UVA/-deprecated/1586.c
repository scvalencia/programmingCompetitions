#include <stdio.h>
#include <string.h>
#include <ctype.h>

double darPeso(char arg) {
	double ans = 0.0;
	switch(arg) {
		case 'C':
			ans = 12.01;
			break;
		case 'H':
			ans = 1.008;
			break;
		case 'O':
			ans = 16.00;
			break;
		case 'N':
			ans = 14.01;
			break;
		default:
			break;
	} 
	return ans;
}

int getValue(char arg) {
	return arg - '0';
}

void solve(char input[], int size) {
	double sum = 0.0;
	double currentValue = 0.0;
	int dec;
	int i = 0;
	if(size == 1)
		sum = darPeso(input[0]);
	else {
		for(; i < size; ) {
			char thisChar = input[i];
			if(isalpha(thisChar)) {
				currentValue = darPeso(thisChar);
				i++;
			}
			else if(isdigit(thisChar)) {
				if(i != (size - 1)) {
					char nextChar = input[i + 1];
					if(isalpha(nextChar)) {
						sum += currentValue * (getValue(thisChar) - 1);
						currentValue = 0.0;
						i++;
					}
					else {
						dec = (getValue(thisChar) * 10) + getValue(nextChar);
						sum += currentValue * (dec - 1);
						currentValue = 0.0;
						i += 2; 
					}
				}
				else {
					sum += currentValue * getValue(thisChar);
					i++;
				}
			}
			sum += currentValue;
		}
	}
	printf("%.3f\n", sum);
}

int main(int argc, char **argv) {
	int TC;
	scanf("%d", &TC);
	while(TC--){
		char input[100];
		scanf("%s", input);
		int len = strlen(input);
		solve(input, len);
	}
	return 0;
}