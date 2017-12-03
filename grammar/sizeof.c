#include <stdio.h>

/**
 * sizeof()
 */
int main(int argc, char *argv[]) {
    printf("Type \tSize\n");
    printf("_Bool \t%zd\n", sizeof(_Bool));
    printf("char \t%zd\n", sizeof(char));
    printf("short \t%zd\n", sizeof(short));
    printf("int \t%zd\n", sizeof(int));
    printf("long \t%zd\n", sizeof(long));
    printf("float \t%zd\n", sizeof(float));
    printf("double \t%zd\n", sizeof(double));
    return 0;
}
