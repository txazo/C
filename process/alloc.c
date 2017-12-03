#include <stdio.h>
#include <stdlib.h>

/**
 * 内存分配
 *
 * malloc
 * realloc
 *
 * Java: 自动内存分配、Unsafe.allocateMemory()
 */
int main(int argc, char *argv[]) {
    void *address = (char *) malloc(16);
    printf("address: %p\n", address);

    malloc(10);

    address = realloc(address, 32);
    printf("address: %p\n", address);

    return 0;
}
