#include <stdio.h>

int main(void) {


	int num = 100;
	int* ptr = &num;

	printf("%d\n", ptr);
	printf("%d\n", *ptr);

	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	return 0;
}