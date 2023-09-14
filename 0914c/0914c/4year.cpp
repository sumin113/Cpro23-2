#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x, year = 0;

	printf("년도를 입력하시오. : ");
	scanf_s("%d", &x);

	year = ((x % 4 == 0) && !(x % 100 == 0) || (x % 400 == 0));

	if (year == 1) {
		printf("%d는 윤년입니다.", x);
	}
	else {
		printf("%d는 윤년이 아닙니다.", x);
	}


	return 0;
}