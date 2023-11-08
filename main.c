#include "drivers/prompt.h"
#include "headers.h"
#include "drivers/hostname.h"
#include "drivers/commands.h"
#include "drivers/init.h"

char *owd, *cwd, *prev_cwd;
char *history_stack[20];
int stack_index;
char *hname;
int time_taken;

int main()
{
    init();
    while (1)
    {
        prompt(hname, get_dir(owd, cwd));
        char a[MAX_BUFFER_SIZE];
        fgets(a, MAX_BUFFER_SIZE, stdin);
        commands(a);
    }
}
