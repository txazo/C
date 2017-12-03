#include <stdio.h>

/**
 * 字符I/O: getchar()、putchar()
 */
int main(int argc, char *argv[]) {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
