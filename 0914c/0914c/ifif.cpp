#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int jumsu;

	printf("점수를 입력하시오. : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
		printf("잘못 입력\n");
	else if(jumsu>=90)
		printf("A\n");
	else if (jumsu >= 80)
		printf("B\n");
	else if (jumsu >= 70)
		printf("C\n");
	else if (jumsu >= 60)
		printf("D\n");
	else
		printf("F\n");


	return 0;
}