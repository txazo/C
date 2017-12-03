#include <stdio.h>

/**
 * 指针
 *
 * Java: Object
 */
int main(int argc, char *argv[]) {
    int i = 10;
    int *p = &i;
    printf("[%p]=%d\n", p, *p);
    return 0;
}
