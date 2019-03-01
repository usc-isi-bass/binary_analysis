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

void main()
{
    char *p,*p0,*q;
    p0=p=(char *)malloc(100*sizeof(char));
    q=(char *)malloc(100*sizeof(char));
    gets(p);
    for(p=p0;*p!='\0';p++)
    {
        if(*p!=' ')printf("%c",*p);
        else for(q=p;*q!='\0';q++)
            if(*q!=' ')
            {
                p=q-1;
                printf(" ");
                break;
            }
    }
}