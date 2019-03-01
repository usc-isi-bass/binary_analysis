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
    char *p[100];
    char *family[100];
    char *t,*s;
    gets(p);
    for (t=p,s=family;*(t+1)!='\0';t++,s++)
    {
        *s=*t+*(t+1);
    }
    *s=*t+*p;
    printf("%s",family);
}
