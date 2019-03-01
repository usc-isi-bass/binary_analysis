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
    struct dc
    {
           char a[100];
           int len;
    }dc[200],*ps;
    ps=dc;
    int n,max=0,min=500,i;
    char *pmax,*pmin;
    scanf("%d",&n);
    for(i=0;i<n;i++,ps++)
    {
                    scanf("%s",ps->a);
                    ps->len=strlen(ps->a);
                    if(ps->len>max)
                    {
                                    max=ps->len;
                                    pmax=ps->a;
                    }
                    if(ps->len<min)
                    {
                                    min=ps->len;
                                    pmin=ps->a;
                    }
    }
    printf("%s\n%s",pmax,pmin);
    return 0; 
}