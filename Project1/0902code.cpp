#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, a, b, c;


	printf("number : ");
	scanf_s("%d", &c);

	for (x = 0; x < c; x++) {

		for (a = x; a < (c - 1); a++) {
			printf(" ");
		}
		for (b = 0; b <= x * 2; b++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;

}
