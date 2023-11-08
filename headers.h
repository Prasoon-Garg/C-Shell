#ifndef __HEADERS_H__
#define __HEADERS_H__

#define MAX_BUFFER_SIZE 1024

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>
#include <unistd.h>
#include <pwd.h>

extern char *owd, *cwd, *prev_cwd;
extern char *hname;

#endif // __HEADERS_H__