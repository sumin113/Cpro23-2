#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("�Է��� ���� %d�� ¦���Դϴ�.", num);
	}
	else {
		printf("�Է��� ���� %d�� Ȧ���Դϴ�.", num);
	}

	return 0;
}