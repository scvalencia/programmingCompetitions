#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void solve(void);

int main(int argc, char const *argv[]) {
	int TC;
	scanf("%d", &TC);
	bool first = true;
	while(TC--)
		solve();
	return 0;
}

void solve(void) {
	int instructions;
	scanf("%d\n", &instructions);
	char executedInstructions[instructions][15];
	int memoized[instructions];
	int i = 0, p = 0;
	for(; i < instructions; i++)
		memoized[i] = 0;
	i = 0;
	while(i < instructions) {
		char *buffer;
        size_t  n = 15;
       	buffer = malloc(n);
        getline(&buffer, &n, stdin);
        memset(executedInstructions[i], '\0', sizeof(buffer));
        strcpy(executedInstructions[i], buffer);
        if(executedInstructions[i][0] == 'L') {
        	p -= 1;
        	memoized[i] = -1;
        }
        else if(executedInstructions[i][0] == 'R') {
        	p += 1;
        	memoized[i] = 1;
        }
        else if(executedInstructions[i][0] == 'S') {
        	int len = strlen(executedInstructions[i]), value = 0;
        	if(len == 10)
        		value = executedInstructions[i][8] - '0';
        	else if(len == 11) {
        		int a = executedInstructions[i][8] - '0';
        		int b = executedInstructions[i][9] - '0';
        		value = a * 10 + b;
        	}
        	if(memoized[value - 1] == -1)
        		p -= 1;
        	else
        		p += 1;
        	memoized[i] = memoized[value - 1];
        }
        i++;
	}
	printf("%d\n", p);
}