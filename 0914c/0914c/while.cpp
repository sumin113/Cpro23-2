#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int cnt=0, hap = 0;


	while (cnt <= 10) {

		hap += cnt;
		printf("%d\n", cnt);
		cnt ++;
	}
	printf("%d", hap);

	return 0;
}