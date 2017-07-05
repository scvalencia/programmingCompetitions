#include <stdio.h>

int main(int argc, char const *argv[]) {
    int i = 1;

    while(i < 10) {
    	int j = i + 6;
    	printf("I=%d J=%d\n", i, j);
    	printf("I=%d J=%d\n", i, j - 1);
    	printf("I=%d J=%d\n", i, j - 2);

    	i += 2;
    }

    return 0;
}