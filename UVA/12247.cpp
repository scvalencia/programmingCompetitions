#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <vector>
#define MAX(a, b) ((a > b) ? (a) : (b))
#define MIN(a, b) ((a < b) ? (a) : (b))
#define MAX3(a, b, c) MAX(MAX(a, b), c)
#define MIN3(a, b, c) MIN(MIN(a, b), c)
#define N 53
#define FLAG -1
#define SIZE 3
using namespace std;

void calibrate(int *a, int *b, int flag);
void Print (const vector<int>& v);
int play(int array1[3], int array2[3], bool cards[N], int posFlag, int* alreadyWin);
int findFlag(int array[3]);


int main(int argc, char const *argv[]) {
	
	bool cards[N];
	int i = 0;
	for(; i < N; i++)
		cards[i] = false;
	int p1[3], p2[3], min;
	while((scanf("%d %d %d %d %d", &p1[0], &p1[1], &p1[2], &p2[1], &p2[2])) 
		&& (p1[0] && p1[1] && p1[2] && p2[1] && p2[2])) {
		p2[0] = -1;
		sort(p1, p1 + SIZE);
		sort(p2, p2 + SIZE);
		min = 54;
		cards[p1[0]] = true; cards[p1[1]] = true; cards[p1[2]] = true;
		cards[p2[1]] = true; cards[p2[2]] = true;
		int ans, pFlag;
		int win_flag = 0;
		vector<int> alreadyWin;
		do {
			do {
				pFlag = findFlag(p2);
				ans = play(p1, p2, cards, pFlag, &win_flag);
				alreadyWin.push_back(ans);
				if(win_flag == 1) {
					alreadyWin.push_back(ans);
					printf("%d **", ans);
					win_flag = 0;
				}
				if(ans < min && ans > 0) {
					min = ans;
					alreadyWin.push_back(ans);
				}
				Print(alreadyWin);
			} while (next_permutation(p2, p2 + SIZE));
		} while(next_permutation(p1, p1 + SIZE));
		printf("%d\n", ans);
	}

	return 0;
}

int play(int array1[3], int array2[3], bool cards[N], int posFlag, int* alreadyWin) {
	int a, b, ans = 0;
	calibrate(&a, &b, posFlag);
	if(array1[a] > array2[a] && array1[b] > array2[b])
		return -1;
	if(array2[a] > array1[a] && array2[b] > array2[b]) {
		*alreadyWin = 1;
	}
	int i = array1[posFlag];
	for(; i < N; i++)
		if(!cards[i]) {			
			ans = i;
			break;
		}
	

	return ans;
}

int findFlag(int array[3]) {
	int ans;
	if(array[0] == FLAG)
		ans = 0;
	else if(array[1] == FLAG)
		ans = 1;
	else
		ans = 2;
	return ans;
}

void calibrate(int *a, int *b, int flag) {
	if(flag == 0) {
		*a = 1;
		*b = 2;
	}
	else if(flag == 1) {
		*a = 0;
		*b = 2;
	}
	else {
		*a = 0;
		*b = 1;
	}
} 

void Print (const vector<int>& v){
  //vector<int> v;
  for (int i = 0; i < v.size(); i++){
    cout << v[i] << endl;
  }
}