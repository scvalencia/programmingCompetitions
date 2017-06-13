#include <stdio.h>

#define MIN(a, b) ((a) < (b)) ? (a) : (b)
#define MAX(a, b) ((a) < (b)) ? (b) : (a)

void sort3numbers(int* a, int* b, int* c) {
	int min = MIN(*a, MIN(*b, *c));
	int max = MAX(*a, MAX(*b, *c));
	int mid;

	if((*b == min && *c == max) || (*c == min && *b == max))
		mid = *a;
	else if((*a == min && *c == max) || (*c == min && *a == max))
		mid = *b;
	else if((*b == min && *a == max) || (*a == min && *b == max))
		mid = *c;

	*a = min; *b = mid; *c = max;

}

int main(int argc, char const *argv[]) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int oa = a, ob = b, oc = c;
	sort3numbers(&a, &b, &c);

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, oa, ob, oc);
	return 0;
}