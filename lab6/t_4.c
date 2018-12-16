#include <stdio.h>
#include <stdlib.h>

extern char **environ;
int main(int argc, char *argv[]){
    if (argc == 2){
	char **p;
	int c = 0;
	int bound  = atoi(argv[1]);
        for (p = environ; *p != NULL; p++){
	    printf("%s\n", *p);
	    c++;
            if(c == bound) break;
        }
    }
    return 0;
}
