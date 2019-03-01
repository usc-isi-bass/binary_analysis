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
    int a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    int i,j,w;
    scanf("%d",&w);
    for(i=0;i<=11;i++)
    {
        if((a[i]+13-1+w)%7==5)
        printf("%d\n",i+1);
    }
    return 0;
}
