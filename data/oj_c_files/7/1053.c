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
    char a[256],b[256],c[256];
    char *p;
    int lenth,d,i;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    p=strstr(a,b);
    lenth=strlen(b);
    d=strlen(a);
    if(p!=NULL)
    {
        for(i=0;i<lenth;p++,i++)
        *p=c[i];
    }
    for(i=0;i<d;i++)
    printf("%c",a[i]);
}
