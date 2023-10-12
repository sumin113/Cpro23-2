#include <stdio.h>

void Sort(int* p_arr, int size) {
    int a, f, s, b;

    for (a = 0; a < size - 1; a++) {
       s = a;

        for (f = a + 1; f < size; f++) {
            if (p_arr[f] < p_arr[s]) {
                s = f;
            }
        }
        b = p_arr[a];
        p_arr[a] = p_arr[s];
        p_arr[s] = b;
    }
}

int main() {
    int i;
    int arr[5] = { 5, 4, 1, 2, 3 };
    int* p_arr = arr;

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    Sort(p_arr, 5);

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
