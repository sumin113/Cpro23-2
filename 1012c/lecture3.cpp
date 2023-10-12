#include <stdio.h>

int main(void) {

	int score[5] = { 87,92,89,98,78 };
	int* p_score = &score[1];

		for (int i = 0; i < 3; i++){
			printf("%d\n", score[i]);

	}

	return 0;
}