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

int main()
{
    char *p;
    int i;
    void guolv(char *p);
    p=(char *)malloc(1000);
    gets(p);
    guolv(p);
        return 0;
}

void guolv(char *p)
{
     int i;
     for(i=0;(*(p+i))!='\0';i++)
     {
                                if(((*(p+i))==' ')&&((*(p+(i+1)))==' '));
                                else
                                printf("%c",*(p+i));
     }
}