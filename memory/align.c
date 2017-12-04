#include <stdio.h>

/**
 * 内存对齐
 */
int main(int argc, char *argv[]) {
    printf("Type \tAlign\n");
    printf("-------------\n");
    printf("Char \t%zd\n", _Alignof(char));
    printf("Short \t%zd\n", _Alignof(short));
    printf("Int \t%zd\n", _Alignof(int));
    printf("Long \t%zd\n", _Alignof(long));
    printf("Float \t%zd\n", _Alignof(float));
    printf("Double \t%zd\n", _Alignof(double));
    return 0;
}
