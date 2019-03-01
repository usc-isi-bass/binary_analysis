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
    int m,i,j,c,d;
    scanf("%d",&m);
    for(i=3;i<=(m/2);i=i+2)
    {
        for(c=0,j=2;j<i;j++)
        {
            if(i%j!=0)
            c=c+1;
        }
        if(c==(i-2))
        {
            for(d=0,j=2;j<(m-i);j++)
            {
                if((m-i)%j!=0)
                d=d+1;
            }
            if(d==(m-i-2))
            printf("%d %d\n",i,m-i);
        }
    }
}