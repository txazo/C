#include <stdio.h>

struct User {
    int id;
    char *name;
};

static void test1(struct User);

static void test2(struct User *);

/**
 * 结构体
 */
int main(int argc, char *argv[]) {
    struct User user;
    user.id = 1;
    user.name = "root";
    printf("[%p]\n", &user);
    printf("[%p] = %d\n", &user.id, user.id);
    printf("[%p] = %p\n", &user.name, user.name);
    printf("[%p] = %s\n", user.name, user.name);

    // 指针访问结构体
    struct User *userp;
    userp = &user;
    printf("[%p] = %d\n", &(userp->id), userp->id);
    printf("[%p] = %d\n", &((*userp).id), (*userp).id);

    test1(user);
    test2(userp);

    return 0;
}

/**
 * 传递结构体: 浅克隆
 */
static void test1(struct User user) {
    printf("[%p] = %d\n", &user.id, user.id);
    printf("[%p] = %p\n", &user.name, user.name);
}

/**
 * 传递结构体指针
 */
static void test2(struct User *userp) {
    printf("[%p] = %d\n", &(userp->id), userp->id);
    printf("[%p] = %p\n", &(userp->name), userp->name);
}
