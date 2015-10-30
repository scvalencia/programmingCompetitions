#include <cstdio>
#include <vector>

#define FRIENDS 20
using namespace std;

int friends[FRIENDS + 1];
int peso_max, num_personas, ans;
vector<int> memo_table, aux_location;

void dp_recurrence(int k, int summation) {
    if (summation > ans) {
        aux_location = memo_table;
        ans = summation;
    }

    int i = k;
    while(i < num_personas) {
        int val = *(friends + i);
        if (val + summation <= peso_max) {
            summation += val;
            memo_table.push_back(val);
            dp_recurrence(i + 1, summation);
            summation -= val;
            memo_table.pop_back();
        }
        i++;
    }
}

int main(int argc, char const *argv[]) {
    while (scanf("%d %d", &peso_max, &num_personas) != EOF) {
        for (int i = 0; i < num_personas; ++i)
            scanf("%d", &friends[i]);
        memo_table.clear();

        ans = 0;
        dp_recurrence(0, 0);

        int summation = 0;
        std::vector<int>::iterator itr = aux_location.begin();
        while(itr != aux_location.end()) {
            int val = *itr;
            printf("%d ", val);
            summation += val;
            ++itr;
        }
        printf("sum:%d\n", summation);
    }
    return 0;
}