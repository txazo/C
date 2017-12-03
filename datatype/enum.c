#include <stdio.h>

enum Color {
    red, orange, yellow, green, blue = 10
};

/**
 * 枚举
 */
int main(int argc, char *argv[]) {
    enum Color color = red;
    printf("%d\n", color);
    printf("%d\n", orange);
    printf("%d\n", yellow);
    printf("%d\n", green);
    printf("%d\n", blue);
    return 0;
}
