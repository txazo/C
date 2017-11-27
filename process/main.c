#include <stdio.h>
#include <stdlib.h>

/**
 * main函数标准格式
 */
int main(int argc, char *argv[]) {
    for (int i = 0; argv[i] != NULL; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    exit(0);
    // return 0;
}
