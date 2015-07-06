#include <stdio.h>

int distance_clockwise(int a, int b);
int distance_counter_clockwise(int a, int b);

int main(int argc, char const *argv[]) {
	int a, b, c, d;
	while(scanf("%d %d %d %d", &a, &b, &c, &d) && (a || b || c || d)) {
		int ans = 720;
		ans += distance_counter_clockwise(a, b);
		ans += 360;
		ans += distance_clockwise(b, c);
		ans += distance_counter_clockwise(c, d);
		printf("%d\n", ans);
	}
	return 0;
}

int distance_clockwise(int a, int b) {
	return 360 - distance_counter_clockwise(a, b);
}

int distance_counter_clockwise(int a, int b) {
	int ans = 0;
	if(a == 0)
		ans = ((7 - (b/5)) + 1) * 45;
	else
		if(a > b)
			ans = (a - b) * 9;
		else
			ans = 360 - (b - a) * 9;
	return ans; 
}