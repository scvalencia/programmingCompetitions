#include <stdio.h>
#include <stdbool.h>

bool DEBUGGING = false;

void print_array(int array[], int size);
int frequencies(int array[], int size);

int main(int argc, char **argv) {
	int n, m;
	int caseCounter = 1;
	scanf("%d %d", &n, &m);
	while(n != 0 && m != 0) {
		int alias = m;
		int ID[n + 1];
		int i = 1;
		for(; i <= n; i++)
			ID[i] = i;
		int count = n;
		while(alias--) {
			int p, q;
			scanf("%d %d", &p, &q);
			int pID = ID[p];
			int qID = ID[q];
			if(pID == qID)
				continue;
			for(i = 1; i <= n; i++)
				if(ID[i] == pID)
					ID[i] = qID;
		}
		if(DEBUGGING)
			print_array(ID, n + 1);
		printf("Case %d: %d\n", caseCounter, frequencies(ID, n + 1));
		caseCounter++;
		scanf("%d %d", &n, &m);
	}	
}

void print_array(int array[], int size) {
	int i = 0;
	for(; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int frequencies(int array[], int size) {
	int sum = 0;
	int counterHelper[size], i;
	for(i = 1; i < size; i++)
		counterHelper[i] = 0;
	for(i = 1; i < size; i++)
		counterHelper[array[i]]++;	
	for(i = 1; i < size; i++)
		if(counterHelper[i] != 0)
			sum++;
	return sum;
}