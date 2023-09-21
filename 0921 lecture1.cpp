#include <stdio.h>

int isPrime(int num) {

	for (int div = num - 1; div > 1; div--) {
		if (num % div == 0) return 0;
	}
	return 1;



	/*if (output == 1) {
		printf("주어진 수는 소수입니다.")
	}
	else {
		printf("해당 수는 소수가 아닙니다.")
	}*/


	return 0;
}

int main() {
	int num;
	scanf_s("%d", &num);

	printf("%d\n", isPrime(num));

	return 0;
}