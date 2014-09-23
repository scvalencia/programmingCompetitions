#include <stdio.h>

int main(int argc, char *argv[]) {
	char input[100];
	int speed = 0, nSpeed, seconds;
	double kilometers = 0.0, time = 0.0;
	while(gets(input)) {
		int h, m, s;
		int inputSize = sscanf(input, "%d:%d:%d %d", &h, &m, &s, &nSpeed);
		seconds = h * 3600 + m * 60 + s * 1;
		kilometers += speed * (seconds - time);
		time = (double) seconds;
		if(inputSize == 4) 
			speed = nSpeed;
		else if(inputSize == 3)
			printf("%.2d:%.2d:%.2d %.2lf km\n", h, m, s, kilometers/3600);
	}
	return 0;
}