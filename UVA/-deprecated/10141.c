#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_BUFFER_SIZE 80

int main(int argc, char const *argv[]) {

	int i, j;
    int numRequirement, numProposal, numSatisfy, maxSatisfy;
    int testCase = 1;
    bool isFirst = true;

    double price, minPrice;

    char proposalName[MAX_BUFFER_SIZE + 1];
    char bestProposalName[MAX_BUFFER_SIZE + 1];
    char trash[MAX_BUFFER_SIZE + 1];

    while(true) {
        minPrice = -1;
        maxSatisfy = 0;

        scanf("%d %d", &numRequirement, &numProposal);

        if (!(numRequirement && numProposal)) break;
        
        gets(trash);

        if(isFirst)
            isFirst = false;
        else
           	printf("\n");

        for (i = 0; i < numRequirement; i++)
            gets(trash);
       
        
        for (i = 0; i < numProposal; i++) {
            gets(proposalName);
            scanf("%lf %d", &price, &numSatisfy);
            gets(trash);

            for (j = 0; j < numSatisfy; j++) gets(trash);

            if (numSatisfy > maxSatisfy ||
                (numSatisfy == maxSatisfy && (minPrice < 0 || price < minPrice))) {
                minPrice = price;
                maxSatisfy = numSatisfy;
                strcpy(bestProposalName, proposalName);
            }
        }

        printf("RFP #%d\n%s\n", testCase, bestProposalName);

        testCase++;
    }

    return 0;
}