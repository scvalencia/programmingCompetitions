#include <stdio.h>
#include <stdbool.h>

int summation(int n) {

	bool flag10 = true, flag12 = true, flag16 = true;
	int sum10 = 0, sum12 = 0, sum16 = 0;
	int div10 = n, div12 = n, div16 = n;

	while(flag10 || flag12 || flag16) {
		if(flag10) {
			sum10 += (div10 % 10);
			div10 /= 10;
			if(div10 == 0) flag10 = false;
		}

		if(flag12) {
			sum12 += (div12 % 12);
			div12 /= 12;
			if(div12 == 0) flag12 = false;
		}

		if(flag16) {
			sum16 += (div16 % 16);
			div16 /= 16;
			if(div16 == 0) flag16 = false;
		}

	}

	return (sum10 == sum12 && sum12 == sum16) ? n : -1;

}

int main(int argc, char const *argv[]) {
	int i = 2992;
	while(i < 10000) {
		if(summation(i) == i)
			printf("%d\n", i);
		i++;
	}
	return 0;
}