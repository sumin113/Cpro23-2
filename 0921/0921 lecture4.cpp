#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {

	double x = 0;
	double y = 0;

	int cnt = 0; 
	int cir = 0;

	srand(time(NULL));

	while (cnt < 10000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		cnt++;
	}

	return 0;
}

