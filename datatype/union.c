#include <stdio.h>

union ID {
    char c;
    int i;
    long l;
};

/**
 * 联合
 */
int main(int argc, char *argv[]) {
    union ID id1 = {.c = 'A'};
    union ID id2 = {.i = 2};
    union ID id3 = {.l = 3L};
    printf("%zd\n", sizeof(id1));
    printf("%zd\n", sizeof(id2));
    printf("%zd\n", sizeof(id3));

    // 访问成员
    printf("%u\n", id1.c);
    printf("%u\n", (&id1)->c);
    printf("%u\n", (*(&id1)).c);

    return 0;
}
