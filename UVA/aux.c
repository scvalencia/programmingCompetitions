#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int primes[7000];
bool marks[60000];


int sieve2(int n)
{

    int i, j, k;

    memset(marks,true,n);

    marks[0] = marks[1] = false;

    for (i=4 ; i<n ; i+=2)
        marks[i]=false;

    for (i=3 ; i*i<n ; i+=2)
    {
        if (marks[i]==true)
        {
            for (j=i*i ; j<n ; j+=(2*i))
                marks[j]=false;
        }

    }

    for (i=2, j=0 ; i<=n ; i++)
    {
        if (marks[i]==true)
        {
            primes[j++]=i;
        }
    }

    return j-1;

}

int main() {

    int i, j, q;
    int mark=sieve2(60000);


    while (scanf("%d",&q) && q)
    {

        printf("%d =",q);

        if (q<0)
        {
          printf(" -1 x");
          q=-q;
        }

        if (q==1)
        {
            printf(" 1\n");
            continue;
        }

        for (j=0 ; primes[j]<q && j<mark ; j++)
        {
            while (q%primes[j]==0)
            {
                q/=primes[j];
                if (q>1)printf(" %d x",primes[j]);
                else printf(" %d",primes[j]);

            }
        }

        if (q>1)
            printf(" %d",q);

        printf("\n");
    }



    return 0;

}