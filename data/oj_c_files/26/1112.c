#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(int argc, char *argv[])
{
    char *p,a[101];
    for(p=gets(a);*p;p++)
    {
        if(*p==' '&&*(p-1)==' ') continue;
        printf("%c",*p);
    }
    return 0;
}
