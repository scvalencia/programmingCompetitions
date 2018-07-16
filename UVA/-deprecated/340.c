#include <stdio.h>
#include <stdbool.h>

void scan_array(int n, int array[n], int frequencies[11]);

int main(int argc, char const *argv[]) {
	int N;
	while(scanf("%d", &N) && N != 0) {
		int real_array[N];
		int guess_array[N];
		int k = 0;
		for(; k < N; k++)
			scanf("%d", &real_array[k]);
		while(true) {
			int freqs[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
			bool flag[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
			bool flags[N];
			for(k = 0; k < N; k++)
				flags[k] = false;
			scan_array(N, guess_array, freqs);
			if(guess_array[0] == 0)
				break;
			int i = 0, strong = 0, weak = 0;			
			for(; i < N; i++) {
				int j = 0;
				int rVal = real_array[i];
				for(; j < N; j++) {
					int gVal = guess_array[j];
					if(gVal == rVal && i == j) {
						strong++;
						flags[j] = true;
						flag[gVal] = true;
					} 
					else if(gVal == rVal && i != j && !flags[j] && !flag[gVal]) {
						weak++;
						flags[j] = true;

					}
				} 
			}
			printf("%d %d\n", strong, weak);
		}
	}
	return 0;
}

void scan_array(int n, int array[n], int frequencies[11]) {
	int i = 0;
	for(; i < n; i++) {
		scanf("%d", &array[i]);
		frequencies[array[i]]++;
	}
}