#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int time;
    int over;
    int paused;
    int quit;
    int full_screen;
    int make_bullet;
    int init;
} Status;

Status Status_New();