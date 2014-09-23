#include <stdio.h>
#include <stdbool.h>
#define SIZE 1000
#define PI_SIZE 169

bool arr[SIZE + 1];
int primes[PI_SIZE];

void sieve() {
	int i = 0, j = 0;
	for(i = 2; i <= SIZE; i++)
		for(j = i + 1; j <= SIZE; j++)
			if(arr[j] && j % i == 0)
				arr[j] = false;
}

int pi_funcion(int n) {
	int i = 1, ans = 0;
	for(; i <= SIZE; i++)
		if(arr[i])
			ans++;
	return ans;
}

void set_primes() {
	int i = 1, k = 0;
	for(i = 1, k = 0; i <= SIZE; i++)
		if(arr[i]) {
			primes[k] = i;
			k++;
			if(primes[k] == 0)
				primes[k] = SIZE;
		}
}

void print_primes() {
	int i = 0;
	for(; i < PI_SIZE; i++)
		printf("%d ", primes[i]);
	printf("\n");
}

void solve(int number) {
	int i = 0;
	int val = primes[i];
	while(val <= number) {
		if(val != 0 && val != 1000)
			printf("%d\n", primes[i]);
		i++;
		val = primes[i];
	}
}

int main(void) {
	int i = 0, TC = 0, n = 0;
	for(; i <= SIZE; i++)
		arr[i] = true;
	sieve();
	set_primes();
	scanf("%d", &TC);
	while(TC--) {
		scanf("%d", &n);
		solve(n);
		printf("\n");
	}	
}