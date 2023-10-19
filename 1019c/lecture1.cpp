#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num_s;
	printf("학생수 입력 : ");
	scanf_s("%d", &num_s);

	int* scores;
	scores = (int*)malloc(sizeof(int)*num_s);


	for (int i = 0; i < num_s; i++) {

		printf("학생 # %d-%d 성적 입력", num_s, i);
		scanf_s("%d", scores + i);
	}

	int sum = 0;
	for (int i = 0; i < num_s; i++) {
		sum += scores[i];
	}

	printf("총점 : %d", sum);


	return 0;
}