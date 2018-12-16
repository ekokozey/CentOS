#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]){
    char **k;
    int c = 0;
    for (k = environ; *k != NULL; k++){
	printf("%s\n", *p);
	c++;
	if(c == 10) break;
    }
    return 0;
}
