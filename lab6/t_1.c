#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]){
    char **k;
    int c = 0;
    for (k = environ; *k != NULL; k++)
	k++;
    printf("Number of environment variables: %d\n", k);
    return 0;
}

/*
#!/bin/bash
env | wc -l
*/
