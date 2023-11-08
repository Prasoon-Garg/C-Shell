#include "../headers.h"

int echo(char* args) {
    char *tok = strtok(args, " \t");
    int i=0;
    while(tok!=NULL){
        if(i)
            printf("%s ", tok);
        tok = strtok(NULL, " \t");
        i=1;
    }
    printf("\n");
    return 0;
}