#include <stdio.h>
#include <unistd.h>

int main(void){
    int pid = fork();

    if (pid == 0){
        sleep(10);
    }else if(pid > 0){
	sleep(10);
    }
    return 0;
}
