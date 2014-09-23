#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) {
   return ( *(long long int*)a - *(long long int*)b );
}

int main(int argc, char const *argv[]) {
	long long int N, Q;
	scanf("%lld %lld", &N, &Q);
	long long int i = 0;
	long long int array[N];
	for(; i < N; i++)
		scanf("%lld", &array[i]);
	while(Q--) {
		long long int *item;
   		long long int key;
   		scanf("%lld", &key);
   		item = (long long int*) bsearch (&key, array, N, sizeof (long long int), cmpfunc);
  		if( item != NULL ) 
   		printf("-1\n");
   		printf("%lld\n", *item);
	}
	return 0;
}