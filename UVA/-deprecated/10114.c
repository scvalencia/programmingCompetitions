#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct depreciationRecord {
	int month;
	float percentage;
};

int main(int argc, char const *argv[]) {

	int duration = 110, records;
	float downPayment, loanAmmount;

	while(scanf("%d", &duration) && duration >= 0) {
		scanf("%f %f %d", &downPayment, &loanAmmount, &records);

		struct depreciationRecord* depreciationRecords = malloc(sizeof(struct depreciationRecord) * records);
		float paidPerMonth = loanAmmount / duration;
		int i = 0, n = records, cr = 0;

		while(n--) {
			scanf("%d %f", &depreciationRecords[i].month, &depreciationRecords[i].percentage);
			i++;
		}

		i = 0;
		float value = loanAmmount + downPayment;
		struct depreciationRecord currentRecord = depreciationRecords[cr];

		while(loanAmmount > value * (1 - currentRecord.percentage)) {

			currentRecord = depreciationRecords[cr];
			value *= 1 - currentRecord.percentage; loanAmmount -= paidPerMonth;
			i++;
			
			if(i == depreciationRecords[cr + 1].month) currentRecord = depreciationRecords[cr++];
		}

		printf("%d %s\n", i, (i == 1) ? "month" : "months");
	}

	return 0;
}