#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int main(int argc, char **argv) {
	int TC;
	scanf("%d", &TC);
	int ammount = 0;
	while(TC--) {
		char input[N];
		scanf("%s", input);
		if(input[0] == 'd') {
			int donated;
			scanf("%d", &donated);
			ammount += donated;
		}
		else
			printf("%d\n", ammount);
	}
	return 0;
}