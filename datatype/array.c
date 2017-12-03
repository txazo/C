#include <stdio.h>

#define LENGTH 10

/**
 * 数组
 */
int main(int argc, char *argv[]) {
    int array[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = array;
    // int *p = &array[0];
    for (int i = 0; i < LENGTH; i++) {
        printf("[%p] = %d\n", &array[i], array[i]);
        printf("[%p] = %d\n", array + i, *(array + i));
        printf("[%p] = %d\n", &p[i], p[i]);
        printf("[%p] = %d\n", p + i, *(p + i));
    }

    return 0;
}
