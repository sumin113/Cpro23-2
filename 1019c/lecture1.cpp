#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num_s;
	printf("�л��� �Է� : ");
	scanf_s("%d", &num_s);

	int* scores;
	scores = (int*)malloc(sizeof(int)*num_s);


	for (int i = 0; i < num_s; i++) {

		printf("�л� # %d-%d ���� �Է�", num_s, i);
		scanf_s("%d", scores + i);
	}

	int sum = 0;
	for (int i = 0; i < num_s; i++) {
		sum += scores[i];
	}

	printf("���� : %d", sum);


	return 0;
}