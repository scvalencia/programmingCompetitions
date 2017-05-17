#include <stdio.h>
#include <stdbool.h>

long left_truncable[] = {2, 3, 5, 7, 37, 73, 313, 347, 353, 373, 383, 743, 797, 3467, 7643, 34673, 37643, 76367, 79397, 7693967, 799636997};

int binsearch(int key) {
	int low, high, med, c;
	int temp;
	high = sizeof(left_truncable) / sizeof(left_truncable[0]);
	low = 0;
	med = (high + low) / 2;

	while (high != low+1) {
		temp = left_truncable[med];
		if(temp == key) {
			return med;
		} else if(temp < key) {
			low = med;
		} else {
			high = med;
		}

		med = (high + low) / 2;

	}

	return med; 
}

bool binarySearch(int l, int r, int x) {
   if (r >= l) {
        int mid = l + (r - l) / 2;

        if (left_truncable[mid] == x)  return true;
        if (left_truncable[mid] > x) return binarySearch(l, mid - 1, x);
        return binarySearch(mid + 1, r, x);
   }

   return false;
}

long reverse_number(long n) {
	long reverse = 0;
 
   	while(n != 0) {
   		reverse = reverse * 10;
   		reverse = reverse + n % 10;
   		n = n / 10;
   	}

   	return reverse;
}

void solve(long int a, long int b) {
	int idx = binsearch(a);

	int count = 0;
	long number = left_truncable[idx];
	int n = sizeof(left_truncable) / sizeof(left_truncable[0]);

	while(number <= b) {
		long int rev = reverse_number(number);
		bool in = binarySearch(0, n - 1, rev);
		bool cond = rev < number && rev >= a && rev <= b;
		if(in && !cond)
			count += 1;
		idx += 1;
		number = left_truncable[idx];
	}

	printf("%d\n", count);

}


int main(int argc, char const *argv[]) {
	int testcases;
	scanf("%d", &testcases);

	while(testcases--) {
		long a, b;
		scanf("%ld %ld", &a, &b);
		solve(a, b);
	}

	return 0;
}