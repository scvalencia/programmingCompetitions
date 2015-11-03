/*
ID: **.****#
LANG: C
PROG: friday
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INITIAL_YEAR 1900

int DAYS[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

typedef enum {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY} t_day;

typedef struct date {
    int d_year;
    int d_month;
    int d_day;
} date;

bool is_leap(int year) {
    bool ans = false;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        ans = true;
    return ans;
}

int days_per_month(struct date arg) {
    int year = arg.d_year;
    int month = arg.d_month;

    if(is_leap(year) && month == 2)
        return 29;
    else
        return DAYS[month];
}

struct date get_next_date(struct date arg) {
    int y = arg.d_year, m = arg.d_month, d = arg.d_day;
    struct date ans;

    if(m == 12 && d == 31) {
        ans.d_year = y + 1;
        ans.d_month = 1;
        ans.d_day = 1;
    } else {
        ans.d_year = y;
        if(is_leap(y) && m == 2) {
            ans.d_year = y;
            if(d == 28) {
                ans.d_month = m;
                ans.d_day = d + 1;
            } if(d == 29) {
                ans.d_month = m + 1;
                ans.d_day = 1;
            }
        }
        if(d == DAYS[m]) {             
            ans.d_month = (m < 12) ? m + 1 : 1;
            ans.d_day = 1;           
        } else {
            ans.d_day = d + 1;
            ans.d_month = m;
        }

    }
    return ans;
}

int get_day(struct date arg) {
    int y = arg.d_year, m = arg.d_month, d = arg.d_day;
    int y0, m0, d0, x;

    y0 = y - (14 - m) / 12;
    x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    m0 = m + 12 * ((14 - m) / 12) - 2;
    d0 = (d + x + (31 * m0) / 12) % 7;
    return d0;
}

void print_date(struct date arg) {
    printf("%d-%d-%d\n", arg.d_year, arg.d_month, arg.d_day);
}

struct date init_date(int y, int m, int d) {
    struct date ans;

    ans.d_year = y; ans.d_month = m; ans.d_day = d;
    return ans;
}

int main(int argc, char const *argv[]) {
    FILE *fin  = fopen ("friday.in", "r");
    FILE *fout = fopen ("friday.out", "w");

    int n;
    int this_day = 0;
    int* ans = (int *) calloc(sizeof(int), 7);

    fscanf (fin, "%d", &n);

    struct date current_date = init_date(INITIAL_YEAR, 1, 1);

    while(current_date.d_day != 31 || current_date.d_month != 12 || current_date.d_year != (INITIAL_YEAR + n - 1)) {
        print_date(current_date);
        if(current_date.d_day == 13) {
            this_day = get_day(current_date);
            ans[this_day]++;
        }
        current_date = get_next_date(current_date);
    }

    fprintf(fout, "%d %d %d %d %d %d %d\n", 
        ans[SATURDAY], ans[SUNDAY], ans[MONDAY], ans[TUESDAY], 
        ans[WEDNESDAY], ans[THURSDAY], ans[FRIDAY]);


    return 0;
}