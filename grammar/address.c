#include <stdio.h>

/**
 * &: 变量地址
 */
int main(int argc, char *argv[]) {
    int i = 10;
    printf("[%p]=%d\n", &i, i);
    return 0;
}
