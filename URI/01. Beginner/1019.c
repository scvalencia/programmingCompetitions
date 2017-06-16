#include <stdio.h>
#include <stdlib.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time seconds2time(int seconds) {

	struct time ansTime;

	ansTime.hours = seconds / 3600; seconds %= 3600;
	ansTime.minutes = seconds / 60; seconds %= 60;
	ansTime.seconds = seconds;

	return ansTime;

}

void printTime(struct time argTime) {
	printf("%d:%d:%d\n", argTime.hours, argTime.minutes, argTime.seconds);
}

int main(int argc, char const *argv[]) {
	int seconds;
	scanf("%d", &seconds);
	printTime(seconds2time(seconds));

	return 0;
}