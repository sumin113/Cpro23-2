#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int hap=0, cnt = 0;

for (cnt = 1; cnt <= 10; cnt+=2) {
		hap += cnt;
		printf("%02d������ ������ ��� : %d\n", cnt, hap);
	}
	printf("%d\n", hap);

	return 0;
}