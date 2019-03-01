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
    int m,i,a,b,c,d,e;
    scanf("%d",&m);
    a=m/2;
    for(i=3;i<=a;i++)
    {
        for(b=2;b<i;b++)
        {
            c=i%b;
            if(c==0)
            {b=i;}
        }
        if(c==0)
        {continue;}
        else
        {
            d=m-i;
            for(b=2;b<d;b++)
        {
            c=d%b;
            if(c==0)
            {b=d;}
        }
        }
        if(c!=0)
        {printf("%d %d\n",i,d);}
        }
        return 0;
}

