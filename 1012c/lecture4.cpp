#include <stdio.h>

void swap(int* p_a, int* p_b) {

	int num1 = *p_a;
	int num2 = *p_b;
	*p_a = num2;
	*p_b = num1;

}
int main(void) {

	int a = 100;
	int b = 200;

	printf("%d, %d\n", a, b);
	swap(&a, &b);
	printf("%d, %d\n", a, b);


}
