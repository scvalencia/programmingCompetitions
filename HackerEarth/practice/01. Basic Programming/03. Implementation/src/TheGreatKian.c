#include <stdio.h>
#include <stdlib.h>

void summation(int init, int end, long* accum, int numbers[]) {
	int i = init;
	while(i < end) {
		*accum += numbers[i];
		i += 3;
	}
}

int main(int argc, char const *argv[]) {
	int n;
	scanf("%d", &n);
	int* numbers = (int*) malloc(sizeof(int) * n), i;
	long s1 = 0, s2 = s1, s3 = s2;

	for(i = 0; i < n; i++)
		scanf("%d", &numbers[i]);

	summation(0, n, &s1, numbers);
	summation(1, n, &s2, numbers);
	summation(2, n, &s3, numbers);

	printf("%ld %ld %ld\n", s1, s2, s3);

	return 0;
}