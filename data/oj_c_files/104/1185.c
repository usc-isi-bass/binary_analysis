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
    int x,y;
    int p;
    int a[10];
    int b[10];
    int i=0,j=0,k,m;
    scanf("%d%d",&x,&y);
    do
    {
    if (x>y)
    {
        x=x/2;
    }
    else
    if (y>x)
    {
        y=y/2;
    }
    if(x==y)
        {
            printf("%d",x);
        }
    }
    while(x!=y);

    return 0;
}