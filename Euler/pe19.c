#include <stdio.h>
#include <stdbool.h>

typedef enum {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY} day;

day dayOfWeek(int m, int d, int y) {
	int x;
	y = y - (14 - m) / 12;
	x = y + y/4 - y/100 + y/400;
	m = m + 12 * ((14 - m) / 12) - 2;
	d = (d + x + (31 * m) / 12) % 7;
	return d;
}

bool isLeap(int year) {
	bool ans = false;
	if(year % 4 != 0)
		ans = false;
	else if(year % 100 != 0)
		ans = true;
	else if(year % 400 != 0)
		ans = false;
	else
		ans = true;
	return ans;
}

int main(int argc, char const *argv[]) {
	int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int year, month, day = 1, ans = 0;
	for(year = 1901; year <= 2000; year++) {
		bool leap = isLeap(year);
		days[2] = (leap? 29 : 28);
		for(month = 1; month <= 12; month++)
			if(dayOfWeek(month, day, year) == 6)
				ans++;
	}
	printf("%d\n", ans);
	return 0;
}
