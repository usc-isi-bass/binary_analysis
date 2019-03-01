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

int f(int a,int b)
{
    if (b==1) {return 1;}
    if (a<0) {return 0;}
    else {return f(a-b,b)+f(a,b-1);}
}
int main ()
{
    int w,m,n;
    scanf ("%d",&w);
    for (;w>0;w--)
    {
        scanf ("%d %d",&m,&n);
        printf("%d\n",f(m,n));
    }
}