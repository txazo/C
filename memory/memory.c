#include <stdio.h>
#include <stdlib.h>

int static_i = 1;

/**
 * 内存结构
 */
int main(int argc, char *argv[]) {
    int stack_i = 2;
    int *heap_i_p = (int *) malloc(sizeof(int));
    *heap_i_p = 3;

    // 静态数据区
    printf("[%p] = %d\n", &static_i, static_i);
    // 栈
    printf("[%p] = %d\n", &stack_i, stack_i);
    // 堆
    printf("[%p] = %d\n", heap_i_p, *heap_i_p);

    return 0;
}
