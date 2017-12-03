#include <stdio.h>
#include <string.h>

/**
 * 字符串
 */
int main(int argc, char *argv[]) {
    char name[] = "root";
    printf("%d\n", name[0]);
    printf("%d\n", name[1]);
    printf("%d\n", name[2]);
    printf("%d\n", name[3]);

    // 字符串以\0结尾
    printf("%d\n", name[4]);

    // 字符串长度
    printf("String Length: %lu\n", strlen(name));
    printf("Memory Size: %zd\n", sizeof(name));
    return 0;
}
