#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX(a, b) ((a > b) ? (a) : (b))
#define MIN(a, b) ((a < b) ? (a) : (b))
#define MAX3(a, b, c) MAX(MAX(a, b), c)
#define MIN3(a, b, c) MIN(MIN(a, b), c)
#define N 53

int play(int a, int b, int c, int d, int e, bool cards[N]);
void permute(int size, int k, int array);
void swap(int array[], int i, int k);

int main(int argc, char const *argv[]) {
	bool cards[N];
	int i = 0;
	for(; i < N; i++)
		cards[i] = false;

	int p11, p12, p13, p21, p22;
	while((scanf("%d %d %d %d %d", &p11, &p12, &p13, &p21, &p22)) 
		&& (p11 && p12 && p13 && p21 && p22)) {
		int a = MIN3(p11, p12, p13);
		int c = MAX3(p11, p12, p13);
		int b = p11 ^ p12 ^ p13 ^ a ^ c; // MAX(MIN(a, b), MIN(MAX(a, b), c))
		int d = MIN(p21, p22);
		int e = MAX(p21, p22);
		cards[a] = true; cards[b] = true; cards[c] = true;
		cards[d] = true; cards[e] = true;
		int ans = play(a, b, c, d, e, cards);
		printf("%d\n", ans);
	}


	return 0;
}

void permute(int size, int k, int array) {
	int i;
	if(k == 0)
		return;
	else {
		for(i = k; i >= 0; i--) {
			swap(array, i, k - 1);
			permute(k - 1, size);
			swap(array, i, k - 1);
		}
	}
	return;
}

void swap(int array[], int i, int k) {
	

}

int play(int a, int b, int c, int d, int e, bool cards[N]) {
	int ans;
	if(a > d && c > e)
		ans = -1;
	else {
		int i = b;
		for(; i < N; i++)
			if(!cards[i]) {
				ans = i;
				break;
			}
	}
	return ans;
}