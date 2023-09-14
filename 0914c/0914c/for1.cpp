#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int hap=0, cnt = 0;

for (cnt = 1; cnt <= 10; cnt+=2) {
		hap += cnt;
		printf("%02d까지의 누적합 출력 : %d\n", cnt, hap);
	}
	printf("%d\n", hap);

	return 0;
}