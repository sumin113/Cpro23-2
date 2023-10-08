#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    double x = 0, y = 0, r=0;

    double cnt = 0, circle = 0;

    int percent = 0, i=0;

    srand(time(NULL));

    while (cnt < 10000) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        cnt++;

        r = (x * x) + (y * y);

        if (r <= 1) {
            circle++;
        }

        percent = cnt / 100;

        printf("%d%% 진행... 원주율 : %lf ", percent, (circle / cnt) * 4);
        for (int i = 0; i < percent; i += 5)
        {
            printf("=");
        }
        printf("\n");

    }

    return 0;
}
