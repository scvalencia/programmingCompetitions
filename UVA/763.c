#include <stdio.h>
#include <string.h>

unsigned long int fibonacci[250];

char* zeckendorf(int n) {

	if(n == 0)
		return '0';

	char output[100];
	int counter = 0;
	unsigned long int fi = 0, first = 0;
	int largest_flag;
	int i = 1, j = 0;

	for(; j < 100; j++)
		output[j] = '\0';

	for(; i < 50; i++) 
		if(fibonacci[i] > n) {
			largest_flag = i;
			break;
		}
	
	first = fibonacci[largest_flag];
	while(fibonacci[largest_flag] >= 1) {

		fi = fibonacci[largest_flag];
		if(n >= fi) {
			n -= fi;
			largest_flag -= 1;
			output[counter] = '1'; 
			counter += 1;
		}

		else {
			if(fi == first) {
				largest_flag -= 1;
				continue;
			}
			else if(largest_flag == 1)
				break;
			else {
				largest_flag -= 1;				
				output[counter] = '0'; 
				counter += 1;
			}
		}
	}

	char* y;
    y = (char*)&output;
    return y;

}

int fibBin_to_dec(char* fibNumber) {

	int ans = 0;
	int i = strlen(fibNumber) - 1;
	int j = 2;
	for(; i >= 0; i--) {
		if(fibNumber[i] == '1') {
			ans += fibonacci[j];			
		}
		j++;
	}
	return ans;

}

int main(int argc, char **argv) {

	fibonacci[0] = 1;
	fibonacci[1] = 1;
	int i = 2;
	for(; i < 250; i++)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	char a[100];
	char b[100];
	int counter = 1;

	while(scanf("%s %s", a, b) == 2) {
		int total = fibBin_to_dec(a) + fibBin_to_dec(b);
		char *ans = zeckendorf(total);		
		char bens[100];
		for(i = 0; i < strlen(ans); i++)
			bens[i] = ans[i];
		if(counter == 1) {
			printf("%s\n", bens);
			counter++;
		}
		else {
			printf("\n");
			printf("%s\n", bens);
		}
	}
	
	return 0;
}