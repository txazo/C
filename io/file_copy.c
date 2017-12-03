#include <stdio.h>

/**
 * 文件copy
 */
int main(int argc, char *argv[]) {
    FILE *in = fopen("/Users/txazo/test/in.txt", "r");
    FILE *out = fopen("/Users/txazo/test/out.txt", "w");
    size_t length;
    size_t buf[1024];
    while ((length = fread(buf, sizeof(size_t), sizeof(buf), in)) > 0) {
        fwrite(buf, sizeof(size_t), length, out);
    }
    fclose(out);
    fclose(in);
    return 0;
}
