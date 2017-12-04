#include <stdio.h>
#include "include.h"

/**
 * #include: 文件包含
 */
int main(int argc, char *argv[]) {
    printf("Version %s\n", version());
    return 0;
}

char *version(void) {
    return VERSION;
}
