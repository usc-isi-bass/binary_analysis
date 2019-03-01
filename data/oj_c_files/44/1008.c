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

int f(int x)
{
    int y,v,j;
    v=0;
    for(j=0;x!=0;j++)
    {
        v=v*10+x%10*10;
        x=x/10;
    }
    y=v/10;
    return(y);
}
int main()
{
    int f(int x);
    int i;
    int a[6];
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",f(a[i]));
    }
    return 0;
}
