#include "../headers.h"
#include "commands.h"
#include "../programs/pwd.h"
#include "../programs/cd.h"
#include "../programs/echo.h"
#include "../programs/exit.h"

void commands(char *a) {
    int num_commands[2];
    char **fore, **back;
    if(strlen(a) == 1) {
        return;
    } else {
        a[strlen(a) - 1] = '\0';
        char *a_copy = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
        strcpy(a_copy, a);
        char *tok = strtok(a_copy, " \t");
        if(tok == NULL) return;
        if(strcmp(tok, "echo")==0){
            echo(a);
        }

        if(strcmp(tok, "pwd")==0){
            pwd();
        }

        if(strcmp(tok, "cd")==0){
            cd(a);
        }

        if(strcmp(tok, "exit")==0){
            exit_shell();
        }
    }
}