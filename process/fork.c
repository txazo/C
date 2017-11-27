#include <stdio.h>
#include <unistd.h>

/**
 * fork(): 子进程
 */
int main(int argc, char *argv[]) {
    pid_t pid = fork();
    if (pid == 0) {
        printf("child process %d\n", getpid());
    } else {
        printf("main process %d\n", getpid());
    }
    return 0;
}
