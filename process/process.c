#include <stdio.h>
#include <unistd.h>

/**
 * 进程
 */
int main(int argc, char *argv[]) {
    // 进程id
    printf("pid: %d\n", getpid());
    // 父进程id
    printf("ppid: %d\n", getppid());
    // 进程用户id
    printf("uid: %d\n", getuid());
    printf("euid: %d\n", geteuid());
    // 进程用户组id
    printf("gid: %d\n", getgid());
    printf("egid: %d\n", getegid());
    return 0;
}
