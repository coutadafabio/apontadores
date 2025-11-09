#include <stdio.h>

int main() {
    int nums[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int *p, *q;
    int temp;

    // Ordenar com ponteiros (selection/bubble style)
    for (p = nums; p < nums + 10; p++) {
        for (q = p + 1; q < nums + 10; q++) {
            if (*q < *p) {
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }

    // Imprimir array ordenado
    for (p = nums; p < nums + 10; p++) {
        printf("%d ", *p);
    }

    printf("\n");
    return 0;
}
