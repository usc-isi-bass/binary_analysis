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
    int k,n,a=1,i,b;
    scanf("%d %d",&n,&k);
    for(a=1;;a++)
    {
        i=0;
        b=a;
        while(a%(n-1)==0)
        {
            a=n*a/(n-1)+k;
            i=i+1;
        }
        if(i==n)break;
        else a=b;
    }
        printf("%d",a);
}
