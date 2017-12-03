#include <stdio.h>
#include <stdlib.h>

static void printEnv(char *name);

/**
 * 环境变量
 *
 * Java: System.getenv()
 */
int main(int argc, char *argv[]) {
    printEnv("PATH");
    printEnv("HOME");
    printEnv("USER");
    printEnv("SHELL");
    printEnv("PWD");
    return 0;
}

static void printEnv(char *name) {
    printf("%s: %s\n", name, getenv(name));
}
