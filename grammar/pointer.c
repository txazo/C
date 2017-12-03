#include <stdio.h>

/**
 * 指针
 *
 * Java: Object
 */
int main(int argc, char *argv[]) {
    int i = 10;
    int j = 12;
    // 变量i的地址赋值给指针p
    // 指针p指向变量i
    int *p = &i;
    printf("[%p]=%p\n", &p, p);
    printf("[%p]=%d\n", p, *p);
    printf("[%p]=%d\n", p - 1, *(p - 1));
    return 0;
}
