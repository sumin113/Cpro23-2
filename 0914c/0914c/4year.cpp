#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x, year = 0;

	printf("�⵵�� �Է��Ͻÿ�. : ");
	scanf_s("%d", &x);

	year = ((x % 4 == 0) && !(x % 100 == 0) || (x % 400 == 0));

	if (year == 1) {
		printf("%d�� �����Դϴ�.", x);
	}
	else {
		printf("%d�� ������ �ƴմϴ�.", x);
	}


	return 0;
}