#include <stdio.h>
#include <stdlib.h>

int main(void){

	int a, b;

	for (a = 0; a < 5; a++) {

		for (b = 0; b < a; b++) {
			printf("    ");
		}

		if (a % 2 == 0) {
			printf("| O |\n");
		}
		else {
			printf("| X |\n");
		}
		printf("------------------------\n");

	}


	return 0;
	}