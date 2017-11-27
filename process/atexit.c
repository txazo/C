#include <stdio.h>
#include <stdlib.h>

static void my_exit_1(void);

static void my_exit_2(void);

int main(int argc, char *argv[]) {
    // 注册终止函数
    atexit(my_exit_1);
    atexit(my_exit_2);
    printf("main is done\n");
    return 0;
}

static void my_exit_1(void) {
    printf("my_exit_1 handler\n");
}

static void my_exit_2(void) {
    printf("my_exit_2 handler\n");
}
