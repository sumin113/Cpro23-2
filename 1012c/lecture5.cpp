#include <stdio.h>

void sort(int* p_arr) {

	int f, a, b, c;
	a = 0;

	for (a = 0; a < 5 - 1; a++) {

		for (f = a; f < 5; f++) {
			if (*p_arr[f] < *p_arr[f + 1]) {
				b = *p_arr[f]
			}
			int* num1 = b;
			int* num2 = *p_arr[a];
			b = num2;
			*p_arr[a] = num1;
		}

	}
	
}
int main() {

	int i;

	int arr[5] = {5,4,1,2,3};
	int* p_arr = arr[5];

	for (i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}

	return 0;
}