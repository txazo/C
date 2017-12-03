#include <stdio.h>

/**
 * 文件I/O
 */
int main(int argc, char *argv[]) {
    FILE *f = fopen("/Users/txazo/test/char.txt", "r");
    int c;
    while ((c = getc(f)) != EOF) {
        putc(c, stdout);
    }
    fclose(f);
    return 0;
}
