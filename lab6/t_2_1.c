#include <stdio.h>
#include <unistd.h>

int main(void){
    int pid = fork();

    if (pid == 0){
        printf("Message from child process\nPPID=%d PID=%d\n", getppid(), getpid());
    }else if(pid > 0){
        printf("Message from parent process\nChild PID=%d\n", pid);
    }
    return 0;
}
