#include <stdio.h>

/**
 * scanf(): 输入
 */
int main(int argc, char *argv[]) {
    char name[10];
    int age;

    printf("Input name: \n");
    scanf("%s", name);

    printf("Input age: \n");
    scanf("%d", &age);

    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
