#include <stdio.h>
#include <stdbool.h>

long long int getNext(long long int n) {
	long long int ans = 0;
  	while(n != 0) {
  		ans += (n % 10) * (n % 10);
      	n /= 10;
  	}
  	return ans;
}

int main(int argc, char const *argv[]) {
	long long int n = 10000000, i = 1, m;
	int count = 0;
	for(; i <= n; i++) {
		m = i;
		do {
			m = getNext(m);
			if(m == 1 || m == 89)
				break;
		} while(true);
		if(m == 89)
			count++;
	}
	printf("%d\n", count); 
	return 0;
}