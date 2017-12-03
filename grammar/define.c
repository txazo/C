#include <stdio.h>

#ifndef VERSION
#define VERSION "1.0.0"
#endif

int main(int argc, char *argv[]) {
    #ifdef VERSION
    printf("VERSION defined\n");
    #else
    printf("VERSION not defined\n");
    #endif
    return 0;
}
