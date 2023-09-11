#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, a, b, c;


	printf("숫자 입력 : ");
	scanf_s("%d", &c);
	printf("%d층\n", c);

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