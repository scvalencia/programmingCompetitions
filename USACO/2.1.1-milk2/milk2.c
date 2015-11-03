/*
ID: **.****#
LANG: C
TASK: milk2
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 5000
#define INFTY 2000000
#define MAX(a, b) ((a) > (b)) ? (a) : (b)
#define MIN(a, b) ((a) < (b)) ? (a) : (b)

struct pair {
	int a;
	int b;
};

bool overlaps(struct pair first, struct pair scnd) {
	return (first.a < scnd.a)  &&  (first.b <= scnd.b);
}

int comparator(const void *v1, const void *v2) {
    const struct pair *p1 = (struct pair *)v1;
    const struct pair *p2 = (struct pair *)v2;

    return (p1->a < p2->a) ? -1 : ((p1->a > p2->a) ? 1 : 0);
}

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen ("milk2.in", "r");
    FILE *fout = fopen ("milk2.out", "w");
    int TC, i = 0, j, n, max = -INFTY, min = INFTY;
    struct pair* array = (struct pair*) malloc(SIZE + 3 * sizeof(struct pair));
    fscanf(fin, "%d", &TC);

    while(TC--) {
    	fscanf(fin, "%d %d", &array[i].a, &array[i].b);
    	i++;
    }

    n = i; // SIZE OF ARRAY

    qsort(array, n, sizeof(struct pair), comparator);

    for(i = n - 1; i >= 0; i--) {
    	struct pair current = array[i];
    	max = MAX(max, current.a - current.a);
    	for(j = i - 1; j >= 0; j--) {
    		struct pair other = array[j];
    		if(overlaps(current, other))
    			max = MAX(max, other.b - current.a);
    		else
    			min = MIN(min, current.b - other.a);
    	}
    }

    printf("%d %d\n", min, max);
  
    //fprintf (fout, "%d\n", a+b);
    return 0;
}