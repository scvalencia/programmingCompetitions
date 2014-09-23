#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define min(a, b) (a < b) ? a : b
 
unsigned long int binomial(int n, int k) {
    int* C = (int*)calloc(k+1, sizeof(int));
    int i, j, res;
 
    C[0] = 1;
 
    for(i = 1; i <= n; i++)
        for(j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
 
    res = C[k];
 
    free(C); 
 
    return res;
}

int main(int argc, char const *argv[]) {
	
	int cases, size;
	int flag = 1;	
	scanf("%d", &cases);

	while(cases--) {

		scanf("%d", &size);

		float data[size];
		int i;

		for(i = 0; i < size; i++)
			scanf("%f", &data[i]);

		double branch = (size - 1) * log(2);

		float sum = 0.0;
		for(i = 0; i < size; i++)
			if(data[i] > 0)
				sum += exp(log(data[i]) + log(binomial(size - 1, i)) - branch);
			else 
				sum -= exp(log(-data[i]) + log(binomial(size - 1, i)) - branch);
		printf("Case #%d: %.3f\n", flag, sum);
		flag++;
	}

	return 0;

}