#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]){
    char **k;
    int c = 0;
    for (k = environ; *k != NULL; k++)
	c++;
    printf("Number of terminal arguments: %d\n", argc);
    printf("Number of environment variables: %d\n", c);
    return 0;
}
