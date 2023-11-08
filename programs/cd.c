#include "../headers.h"

int cd(char* s) {
    int argn=0;
    char *args;
    char *tok = strtok(s, " \t\n");
    while(tok!=NULL){
        if(argn==1){
            strcpy(args, tok);
        }
        tok = strtok(NULL, " \t");
        argn++;
    }

    if(argn > 2) {
        printf("cd: too many arguments\n");
        return 1;
    }
    if(argn == 1 || strcmp(args, "~") == 0) {
        chdir(owd);
        strcpy(prev_cwd, cwd);
        strcpy(cwd, owd);
        return 0;
    }
    if(strcmp(args, "-") == 0) {
        chdir(prev_cwd);
        printf("%s\n", prev_cwd);
        char* temp = (char*)malloc(sizeof(char) * 1024);
        strcpy(temp, cwd);
        strcpy(cwd, prev_cwd);
        strcpy(prev_cwd, temp);
        free(temp);
        return 0;
    }
    if(strlen(args) > 1 && args[0] == '~') {
        char* temp = (char*)malloc(sizeof(char) * 1024);
        strcpy(temp, owd);
        strcat(temp, args + 1);
        strcpy(args, temp);
        free(temp);
    }
    if(chdir(args) == -1) {
        printf("cd: %s: No such file or directory\n", args);
        return 1;
    } else {
        strcpy(prev_cwd, cwd);
        strcpy(cwd, getcwd(NULL, 0));
        return 0;
    }
}