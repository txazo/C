#include <stdio.h>

static void test1(void);

static void test2(void);

static void test3(void);

static void test4(void);

static void test5(void);

static void test6(void);

/**
 * 栈上局部变量
 */
int main(int argc, char *argv[]) {
    char a = '1';
    int b = 2;
    long c = 3;
    int *d = &a;
    printf("a [%p]=%c\n", &a, a);
    printf("b [%p]=%d\n", &b, b);
    printf("c [%p]=%d\n", &c, c);
    printf("d [%p]=%p\n", &d, d);

    printf("-------------------test1---------------------\n");
    test1();
    printf("-------------------test2---------------------\n");
    test2();
    printf("-------------------test3---------------------\n");
    test3();
    printf("-------------------test4---------------------\n");
    test4();
    printf("-------------------test5---------------------\n");
    test5();
    printf("-------------------test6---------------------\n");
    test6();

    return 0;
}

static void test1(void) {
    int p = 1;
    printf("[%p]=%d\n", &p, p);
}

static void test2(void) {
    int a = 2;
    int *p = &a;
    printf("[%p]=%p\n", &p, p);
    printf("[%p]=%d\n", &*p, *p);
    printf("[%p]=%d\n", &a, a);
}

static void test3(void) {
    int a = 3;
    int *b = &a;
    int **p = &b;
    printf("[%p]=%p\n", &p, p);
    printf("[%p]=%p\n", &*p, *p);
    printf("[%p]=%d\n", &**p, **p);
}

static void test4(void) {
    int p[3] = {1, 2, 3};
    printf("[%p]=%d\n", &p[0], p[0]);
    printf("[%p]=%d\n", &p[1], p[1]);
    printf("[%p]=%d\n", &p[2], p[2]);
}

static void test5(void) {
    int a = 1;
    int b = 2;
    int c = 3;
    int *p[3];
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    printf("[%p]=%p\n", &p[0], p[0]);
    printf("[%p]=%p\n", &p[1], p[1]);
    printf("[%p]=%p\n", &p[2], p[2]);
    printf("[%p]=%d\n", &*p[0], *p[0]);
    printf("[%p]=%d\n", &*p[1], *p[1]);
    printf("[%p]=%d\n", &*p[2], *p[2]);
}

static void test6(void) {
    int a[3] = {1, 2, 3};
    int (*p)[3];
    p = &a;
    printf("[%p]=%p\n", &p, p);
    printf("[%p]=%d\n", &(*p)[0], (*p)[0]);
    printf("[%p]=%d\n", &(*p)[1], (*p)[1]);
    printf("[%p]=%d\n", &(*p)[2], (*p)[2]);
}
