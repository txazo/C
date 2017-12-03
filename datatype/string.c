#include <stdio.h>
#include <string.h>

#define MSG "String"

/**
 * 字符串
 *
 * Java: String
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

    // MSG: 字符串字面量
    // 静态存储区的字符串拷贝到数组
    char array[] = MSG;
    // 字符串的地址赋值给指针
    char *p = MSG;
    printf("%p\n", array);
    printf("%p\n", p);
    printf("%p\n", MSG);

    return 0;
}
