#include <stdio.h>

#ifndef VERSION
#define VERSION "1.0.0"
#endif

// 类函数宏
#define ADD(x, y) x+y

/**
 * 宏定义, 预编译时替换
 */
int main(int argc, char *argv[]) {
#ifdef VERSION
    printf("VERSION defined\n");
#else
    printf("VERSION not defined\n");
#endif

    int a = 1;
    int b = 2;
    printf("%d + %d = %d\n", a, b, ADD(a, b));

    return 0;
}
