#include "prompt.h"
#include "../headers.h"

void prompt(char *hname, char* cwd) {
    char *a = (char*)malloc(sizeof(char) * MAX_BUFFER_SIZE);
    a[0] = '\0';
    printf("<" GRN "%s" RESET ":" BLU "%s" RESET " %s> ", hname, cwd, a);
}
