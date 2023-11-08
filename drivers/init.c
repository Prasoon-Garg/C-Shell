#include "../headers.h"
#include "hostname.h"

void init() {
    hname = hostname();
    owd = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
    cwd = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
    prev_cwd = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
    strcpy(owd, getcwd(NULL, 0));
    strcpy(cwd, getcwd(NULL, 0));
    strcpy(prev_cwd, getcwd(NULL, 0));
}