#include <stdio.h>

int getSummation(int n) {
    
    int summation = 0, i = 0;
    
    for(; i < 5; i++, n += 2)
        summation += n;

    return summation;

}


int main(int argc, char const *argv[]) {

    int n;

    while(scanf("%d", &n) && n) {
        if(n % 2 != 0)
            n++;
            
        printf("%d\n", getSummation(n));
        
    }
    
    return 0;
}
