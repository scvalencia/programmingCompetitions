#include <iostream>
using namespace std;

long long ans[] = {2, 3, 5, 7, 37, 73, 313, 347, 353, 373, 383, 743, 797, 3467, 7643, 34673, 37643, 76367, 79397, 7693967, 799636997};

int main() {

  int tc; 
  cin >> tc;

  while(tc--) {
    long long a, b;
    cin >> a >> b;

    int total = 0;
    for (int i = 0; i < 21; i++)
    	if (ans[i] >= a && ans[i] <= b)
        	total++;

    cout << total << endl;
  }
}
