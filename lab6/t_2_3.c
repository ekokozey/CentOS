#include <stdio.h>
#include <unistd.h>

int main(void){
    int pid = 1;

    for(int i = 0; i < 10; i++){
      if(pid != 0)
	  pid = fork();
      else 
	  sleep(3);
    }
    if(pid > 0)
	    sleep(3);
    return 0;
}
