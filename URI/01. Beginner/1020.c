#include <stdio.h>
#include <stdlib.h>

struct date {
	int years;
	int months;
	int days;
};

struct date days2date(int days) {

	struct date ansDate;

	ansDate.years = days / 365; days %= 365;
	ansDate.months = days / 30; days %= 30;
	ansDate.days = days;

	return ansDate;

}

void printDate(struct date argDate) {
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", argDate.years, argDate.months, argDate.days);
}

int main(int argc, char const *argv[]) {
	int days;
	scanf("%d", &days);
	printDate(days2date(days));

	return 0;
}