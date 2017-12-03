#include <stdio.h>

/**
 * 指针
 */
int main(int argc, char *argv[]) {
    int i = 10;
    int *p = &i;
    printf("[%p]=%d\n", p, *p);
    return 0;
}
